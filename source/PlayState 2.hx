package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.math.FlxMath;
import flixel.util.FlxColor;
import flixel.group.FlxGroup;
import flixel.system.FlxSound;
import flixel.FlxObject;
import flixel.graphics.FlxGraphic;
import flixel.addons.transition.FlxTransitionableState;
import flixel.addons.transition.FlxTransitionSprite.GraphicTransTileDiamond;
import flixel.addons.transition.TransitionData;
import flixel.addons.transition.TransitionFade;
import flixel.math.FlxPoint;
import openfl.display.BlendMode;
import flixel.ui.FlxBar;
import flixel.addons.ui.FlxUIState;
import flixel.tile.FlxTilemap;
import flixel.util.FlxPath;
import flixel.util.FlxTimer;
using flixel.util.FlxSpriteUtil;


class PlayState extends FlxUIState
{

	//Default level 
	public static var levelToLoad:String = "deck1";

	public var level: TiledLevel;

	public var player:Player;
	public var alien:Alien;
	public var bullets:FlxTypedGroup<Bullet> = new FlxTypedGroup<Bullet>();
	public var vanishes:FlxTypedGroup<Vanish> = new FlxTypedGroup<Vanish>();
	public var doors:FlxTypedGroup<Door> = new FlxTypedGroup<Door>();
	public var hidingSpots:FlxTypedGroup<HidingSpot> = new FlxTypedGroup<HidingSpot>();

	private var winScreenShowing:Bool = false;
	private var winScreenWait:Float = 25;
	private var gameOverScreenShowing:Bool = false;

	private var _sndHumanScream:FlxSound;

	//Results
	private var playTime:Float = 0;
	public var steps:Int = 0;
	public var shotsFired:Int = 0;

	//Timer
	private var playTimer:FlxTimer;
	private var reconTimer:FlxTimer;
	private var timerText:FlxText;
	private var timerTextBG:FlxSprite;
	private static inline var GREEN_TEXT_COLOR= 0xff15f900;
	private var _sndLightsOff:FlxSound;

	//Alien
	private var lastTimeMoved:Float = MAX_TIME_WAIT;
	private var chaseWaitTime:Float = CHASE_WAIT_TIME;

	private static var MIN_TIME_WAIT = L1_MIN_TIME_WAIT;
	private static var MAX_TIME_WAIT = L1_MAX_TIME_WAIT;

	private static inline var L1_MIN_TIME_WAIT = 300;
	private static inline var L1_MAX_TIME_WAIT = 700;

	private static inline var L2_MIN_TIME_WAIT = 500;
	private static inline var L2_MAX_TIME_WAIT = 1000;

	private static inline var L3_MIN_TIME_WAIT = 800;
	private static inline var L3_MAX_TIME_WAIT = 1500;


	private static var CHASE_WAIT_TIME = L1_CHASE_WAIT_TIME;
	private static inline var L1_CHASE_WAIT_TIME = 50;
	private static inline var L2_CHASE_WAIT_TIME = 30;
	private static inline var L3_CHASE_WAIT_TIME = 10;

	private var alienMoving:Bool = false;
	private var _sndRun:FlxSound;
	private var _sndScream:FlxSound;
	
	//Sonar
	private var lastTimeSonar:Float = 0;
	private var _sndSonar:FlxSound;
	
	private static inline var DIST_LEVEL_1 = 900;
	private static inline var DIST_LEVEL_2 = 600;
	private static inline var DIST_LEVEL_3 = 400;
	private static inline var DIST_LEVEL_4 = 200;
	private static inline var DIST_LEVEL_5 = 100;

	//Shooting
	private var _sndHit:FlxSound;
	private var gunBar:FlxBar;

	//Lights
	public static inline var TILE_SIZE:Int = 16;
	private static inline var GLOW_COLOR_1 = 0xfffdff8f;
	private static inline var GLOW_COLOR_2 = 0xfffef708;
	private static inline var OVERLAY_COLOR = 0xff63c1ba;
	private var shadowOverlay:FlxSprite;

	override public function create():Void
	{
		bgColor = FlxColor.BLACK;
		super.create();

		//transitions
		FlxTransitionableState.defaultTransIn = new TransitionData();
		FlxTransitionableState.defaultTransOut = new TransitionData();
		
		var diamond:FlxGraphic = FlxGraphic.fromClass(GraphicTransTileDiamond);
		diamond.persist = true;
		diamond.destroyOnNoUse = false;
		
		FlxTransitionableState.defaultTransIn.tileData = { asset:diamond, width:32, height:32 };
		FlxTransitionableState.defaultTransIn.color = FlxColor.BLACK;
		FlxTransitionableState.defaultTransIn.duration = 1.0;
		FlxTransitionableState.defaultTransOut.tileData = { asset:diamond, width:32, height:32 };
		FlxTransitionableState.defaultTransOut.color = FlxColor.BLACK;


		level = new TiledLevel("assets/data/maps/" + levelToLoad + ".tmx", this);

		if (levelToLoad == "crew"){
			trace("settings for crew loaded");
			CHASE_WAIT_TIME = L1_CHASE_WAIT_TIME;
			MIN_TIME_WAIT = L1_MIN_TIME_WAIT;
			MAX_TIME_WAIT = L1_MAX_TIME_WAIT;
		}

		if (levelToLoad == "cargo"){
			trace("settings for cargo loaded");
			CHASE_WAIT_TIME = L2_CHASE_WAIT_TIME;
			MIN_TIME_WAIT = L2_MIN_TIME_WAIT;
			MAX_TIME_WAIT = L2_MAX_TIME_WAIT;
		}

		if (levelToLoad == "eng"){
			trace("settings for eng loaded");
			CHASE_WAIT_TIME = L3_CHASE_WAIT_TIME;
			MIN_TIME_WAIT = L3_MIN_TIME_WAIT;
			MAX_TIME_WAIT = L3_MAX_TIME_WAIT;
		}

		add(level.backgroundLayer);
		add(level.wallTiles);
		level.loadObjects(this);
		add(level.objectsLayer);

		//Places alien
		var hd = hidingSpots.getRandom();
		alien = new Alien(hd.x,hd.y);
		alien.path = new FlxPath();
		add(alien);
		alien.changeShape(hd.form);

		//Alien initially invisible
		alien.alpha = 0;

		add(bullets);
		add(vanishes);
		add(player);

		shadowOverlay = new FlxSprite();
		shadowOverlay.makeGraphic(1000, 1000, FlxColor.TRANSPARENT, true);
		shadowOverlay.blend = BlendMode.MULTIPLY;
		add(shadowOverlay);
		shadowOverlay.alpha = 0;

		add(level.foregroundTiles);

		//Timer
		reconTimer = new FlxTimer();
		reconTimer.start(level.reconTime, timerFinished,1);

		playTimer = new FlxTimer();
		playTimer.start(1,0);

		timerTextBG = new FlxSprite(100,10);
		timerTextBG.makeGraphic(40,15,FlxColor.BLACK,true);
		add(timerTextBG);

		timerText = new FlxText(100,10,38,"",10,true);
		timerText.alignment = RIGHT;
		timerText.autoSize = false;
		timerText.color = GREEN_TEXT_COLOR;
		add(timerText);

		//Gun bar
		gunBar = new FlxBar(10, 105, FlxBarFillDirection.LEFT_TO_RIGHT,45, 5, player, "gunCoolDown", 0,player.GUN_COOLDOWN_TIME, false);
		add(gunBar);

		//Sound
		_sndSonar = FlxG.sound.load(AssetPaths.sonar__wav);
		_sndSonar.volume = 0.2;
		_sndRun = FlxG.sound.load(AssetPaths.run__wav);
		_sndScream = FlxG.sound.load(AssetPaths.scream__wav);
		_sndHumanScream = FlxG.sound.load(AssetPaths.humanScream__wav);
		_sndHit = FlxG.sound.load(AssetPaths.hit__wav);
		_sndLightsOff = FlxG.sound.load(AssetPaths.lightsOff__wav);
	}

	override public function update(elapsed:Float):Void
	{

		if (!alien.alive){
			//stops moving alien 
			alien.path.cancel();

			playTimer.active = false;

			if (!winScreenShowing){
				showWinScreen();
			}else{
				winScreenWait--;
				if (winScreenWait < 0){
					WinState.time = playTimer.elapsedLoops;
					WinState.shotsFired = shotsFired;
					WinState.steps = steps;
					WinState.goalSteps = level.goalSteps;
					WinState.goalTime = level.goalTime;
					FlxG.switchState(new WinState());
				}
			}
		}

		if (winScreenShowing || gameOverScreenShowing){
			super.update(elapsed);
			return;
		}

		level.collideWithLevel(player);
		
		updateDoors();
		updateBullets();
		updateEffects();
		updateHud();

		if (reconTimer.finished){
			alien.alpha = 1;
			updateSonar();
			updateAlien();
			processShadows();	
			shadowOverlay.alpha = 1;
		}else{
			updateTimer(elapsed);	
		}

		super.update(elapsed);
	}

	public function updateAlien(){

		//if player just shot -> go after him
		if (player.gunCoolDown > 0){

			//Kill player if alien touches him!
			FlxG.overlap(alien,player,null,overlapped);

			if (alien.path.finished){
				trace("alien reached target");

				chaseWaitTime--;
				if (chaseWaitTime <=0){
					//restart chasing again
					alienMoving = false;	
					chaseWaitTime = CHASE_WAIT_TIME;				
				}
			}

			if (alienMoving){
				return;
			}

			alien.changeShape("alien");

			trace("player shot -> move alien");

			var pathPoints:Array<FlxPoint> = null;
			for (m in level.collidableTileLayers){
					pathPoints = m.findPath(new FlxPoint(alien.x,alien.y), new FlxPoint(player.x,player.y));
				if (pathPoints != null){
					alien.path.start(pathPoints,alien.WALK_SPEED);
					// trace(pathPoints);
					break;
				}	
			}

			//even if we didn't find any path, lets not try that again until we change to another hiding spot
			alienMoving = true;

		}else{

			alien.path.cancel();

			if (alienMoving){
				alienMoving = false;
				lastTimeMoved = 0;
				chaseWaitTime = CHASE_WAIT_TIME;
				trace("alien finished chasing player");
			}

			if (lastTimeMoved <= 0){
				lastTimeMoved = MAX_TIME_WAIT;
				_sndRun.play();

				var vanish = new Vanish(alien.x,alien.y);
				vanishes.add(vanish);

				var hd = hidingSpots.getRandom();
				alien.x = hd.x;
				alien.y = hd.y;
				alien.changeShape(hd.form);
				trace("alien changed place");
			}

			lastTimeMoved--;
		}
	}

	public function updateSonar():Void{
		var p = player.getScreenPosition();
		var a = alien.getScreenPosition();
		var d = p.distanceTo(a);

		// trace("distance to alien: " + d + " lastTimeSonar " + lastTimeSonar);

		if (lastTimeSonar <=0) {
			_sndSonar.play();

			if (d >= DIST_LEVEL_1){
				lastTimeSonar = 500;
			}else if (d < DIST_LEVEL_1 && d >= DIST_LEVEL_2){
				lastTimeSonar = 200;
			}else if(d < DIST_LEVEL_2 && d >= DIST_LEVEL_3){
				lastTimeSonar = 100;
			}else if (d <DIST_LEVEL_3 && d >= DIST_LEVEL_4){
				lastTimeSonar = 50;
			}else if (d <DIST_LEVEL_4 && d >= DIST_LEVEL_5){
				lastTimeSonar = 25;
			}else{
				lastTimeSonar = 10;
			}
		}
		lastTimeSonar--;
	}

	public function updateDoors(){
		for (d in doors){
			var p1 = new FlxPoint(d.x,d.y);
			var p2 = new FlxPoint(player.x, player.y);
			var p3 = new FlxPoint(alien.x, alien.y);
			if (p1.distanceTo(p2) <= d.MIN_DIST_OPEN || p1.distanceTo(p3) <= d.MIN_DIST_OPEN){
				//opens door if not already open
				d.open();
			}else{
				//close door if not already closed
				d.close();
			}
		}
	}

	private function updateBullets(){
			FlxG.overlap(alien,bullets,null,overlapped);
			for (b in bullets){
				level.collideWithLevel(b);
				if (!b.inWorldBounds() || b.ttl <=0){
					bullets.remove(b);
					b.destroy();
				}

			}
	}

	private function updateEffects(){
		for (v in vanishes){
			if (v.ttl <= 0){
				vanishes.remove(v);
				v.destroy();
			}
		}
	}

	private function updateHud(){
		gunBar.x = FlxG.camera.scroll.x + 10;
		gunBar.y = FlxG.camera.scroll.y + 105;
		timerText.x = FlxG.camera.scroll.x + 100;
		timerText.y = FlxG.camera.scroll.y + 10;
		timerTextBG.x = FlxG.camera.scroll.x + 100;
		timerTextBG.y = FlxG.camera.scroll.y + 10;
	}

	private function overlapped(Sprite1:FlxObject, Sprite2:FlxObject):Bool
	{
		var sprite1ClassName:String = Type.getClassName(Type.getClass(Sprite1));
		var sprite2ClassName:String = Type.getClassName(Type.getClass(Sprite2));

		if (sprite1ClassName == "Alien" && sprite2ClassName == "Bullet"){
			var a: Dynamic = cast(Sprite1,Alien);
			var b: Dynamic = cast(Sprite2,Bullet);
			bullets.remove(b);
			b.destroy();
			alien.alive = false;

			//TO DO - Play death animation
			alien.alpha = 0;

			_sndScream.play();
		}

		if (sprite1ClassName == "Alien" && sprite2ClassName == "Player"){
			var a: Dynamic = cast(Sprite1,Alien);
			var p: Dynamic = cast(Sprite2,Player);

			p.kill();
			gameOverScreenShowing = true;
			_sndHumanScream.play();
			FlxG.switchState(new GameOverState());
		}

		return true;
	}

	private function updateTimer(elapsed:Float):Void{
		if (!reconTimer.finished){
			reconTimer.update(elapsed);	
			timerText.text = Math.round(reconTimer.timeLeft) + ":00";
		}
	}


	private function timerFinished(timer:FlxTimer):Void{
		//timer finished
		reconTimer.cancel();
		timerTextBG.alpha = 0;
		timerText.alpha = 0;

		_sndLightsOff.play();
	}



	private function processShadows():Void
	{
		shadowOverlay.fill(OVERLAY_COLOR);

		shadowOverlay.drawCircle( // outer circle
			player.x + player.width/2 + FlxG.random.float( -.6, .6),
			player.y + player.height /2 +  FlxG.random.float( -.6, .6),
			(FlxG.random.bool(5) ? 23 : 23.5), GLOW_COLOR_1);

		shadowOverlay.drawCircle( // inner circle
			player.x + player.width/2 + FlxG.random.float( -.25, .25),
			player.y + player.height/2 + FlxG.random.float( -.25, .25),
			(FlxG.random.bool(5) ? 20 : 20.5), GLOW_COLOR_2);
	}


	// UI3
	private function showWinScreen(){
		winScreenShowing = true;
	}

	private function showGameOverScreen(){
		gameOverScreenShowing = true;
	}


}
