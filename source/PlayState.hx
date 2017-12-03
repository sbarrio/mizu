package;

import flixel.util.FlxCollision;
import flixel.system.FlxSound;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.tile.FlxTilemap;
import flixel.FlxCamera;
import flixel.FlxObject;
import flixel.util.FlxColor;
import flixel.addons.ui.FlxUIState;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;

class PlayState extends FlxUIState
{

	//Constants
	public static var levelToLoad:String = "stage0";
	public static var RAIN_ANIMATION_TIME = 10;

	//Control
	public var isRunning:Bool = false;
	public var isDead:Bool = false;
	public var levelFinished:Bool = false;
	public var canThrowWater:Bool = false;
	public var rainAnimationCoolDown:Int = 0;

	//Objects
	public var level:TiledLevel;
	public var splash:FlxSprite;
	public var player:Player;
	public var goals:FlxTypedGroup<Goal>;
	public var enemies:FlxTypedGroup<Enemy>;
	public var waters:FlxTypedGroup<Water>;
	public var buttons:FlxTypedGroup<Button>;
	public var blocks:FlxTypedGroup<Block>;

	//Game status
	public static var lives:Int = 5;

	//UI
	public var livesText:FlxText;
	public var lifeIcon:FlxSprite;
	public var waterText:FlxText;
	public var gameOverText:FlxText;

	//SFX


	public var sndDie:FlxSound;
	public var sndWaterFill:FlxSound;
	public var sndFireOut:FlxSound;
	public var sndButtonClick:FlxSound;
	public var sndBlockMove:FlxSound;

	override public function create():Void
	{
		super.create();
		bgColor = FlxColor.GRAY;


		//Load level
		trace("Loading level: " + levelToLoad);
		level = new TiledLevel("assets/data/maps/" + levelToLoad + ".tmx", this);

		goals = new FlxTypedGroup<Goal>();
		enemies = new FlxTypedGroup<Enemy>();
		waters = new FlxTypedGroup<Water>();
		buttons = new FlxTypedGroup<Button>();
		blocks = new FlxTypedGroup<Block>();

		add(level.bgLayer);
		add(level.platformTiles);
		level.loadObjects(this);
		add(level.objectsLayer);
		add(waters);

		add(player);

		//Water splash on top of player
		splash = new FlxSprite();
		splash.x = player.x;
		splash.y = player.y -8;
		splash.loadGraphic(AssetPaths.splash__png, true, 32, 8);
		splash.animation.add("idle", [0, 1, 2], 8, true);
		splash.animation.play("idle");
		splash.visible = false;
		add(splash);


		add(level.fgLayer);
		add(level.rainLayer);


		//UI

		lifeIcon = new FlxSprite();
		lifeIcon.loadGraphic(AssetPaths.icon__png, true, 16,16);
		lifeIcon.x = 2;
		lifeIcon.y = 5;
		add(lifeIcon);

		livesText = new FlxText(10, 5, 70, " X " + lives, 8);
		livesText.color = FlxColor.BLACK;
		add(livesText);

		waterText = new FlxText(90, 20, 70, "Water: 0", 8);
		waterText.visible = false;
		add(waterText);

		gameOverText = new FlxText(200, 20, 200, "GAME OVER", 12);
		gameOverText.visible = false;
		gameOverText.color = FlxColor.BLACK;
		add(gameOverText);

		positionHUD();

		//Play Music

		if (FlxG.sound.music == null) // don't restart the music if it's already playing
		{
			FlxG.sound.playMusic(AssetPaths.stage__wav, 1, true);
		}

		//SFX
		sndDie = FlxG.sound.load(AssetPaths.hurt__wav);
		sndWaterFill= FlxG.sound.load(AssetPaths.water_fill__wav);
		sndButtonClick = FlxG.sound.load(AssetPaths.buttonPressed__wav);
		sndBlockMove = FlxG.sound.load(AssetPaths.block_move__wav);
		sndFireOut = FlxG.sound.load(AssetPaths.fire_out__wav);

		isRunning = true;
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);

		if (!isRunning){
			return;
		}

		animateWater();

		//collision
		if (player != null){

			//Update splash animation
			splash.x = player.x-6;
			splash.y = player.y-16;

			level.collideWithLevel(player);
			if (player.x < 0){
				player.x = 0;
			}
			if (player.y < 0){
				player.y = 0;
			}
			if (player.x > level.fullWidth - 16){
				player.x = level.fullWidth - 16;
			}
			if (player.y > level.fullHeight + 32){  //in pitfalls player stops just when it is completely out of sight
				player.y = level.fullHeight + 32 ;
				killPlayer();
			}

			if (player.overlaps(level.rainLayer)){
				increaseWater();
				canThrowWater = false;
				splash.visible = true;
			}else{
				canThrowWater = true;
				splash.visible = false;
			}

			FlxG.overlap(goals, player, null, overlapped);
		}

		//Water
		FlxG.overlap(waters, enemies, null, overlapped);
		for (w in waters){
			if (!w.inWorldBounds()){
				waters.remove(w);
				w.destroy();
			}
		}

		//Enemies
		FlxG.overlap(enemies, player, null, overlapped);
//		for(e in enemies){
//			level.collideWithLevel(e);
//		}

		//Button
		FlxG.overlap(buttons, player, overlapped, FlxObject.separate);

		//Button
		FlxG.overlap(blocks, player, null, FlxObject.separate);

		//UI
		positionHUD();
		waterText.text = "Water: " + player.water;
	}

	public function overlapped(Sprite1:FlxObject, Sprite2:FlxObject):Bool {
		var sprite1ClassName:String = Type.getClassName(Type.getClass(Sprite1));
		var sprite2ClassName:String = Type.getClassName(Type.getClass(Sprite2));

		//trace(sprite1ClassName);
		//trace(sprite2ClassName);

		if (sprite1ClassName == "Goal" && sprite2ClassName == "Player" && !levelFinished){
			//end stage and prepare to go to the next one
			var g:Goal = cast(Sprite1, Goal);
			isRunning = false;
			if (g.targetLevel != null){

				delay(500);
				goToLevel(g.targetLevel, lives);
			}else{
				delay(500);
				goToTitle();
			}
		}

		if (sprite1ClassName == "Enemy" && sprite2ClassName == "Player" && !levelFinished){
			killPlayer();
		}

		if (sprite1ClassName == "Water" && sprite2ClassName == "Enemy" && !levelFinished){
			var w:Water = cast(Sprite1, Water);
			var e:Enemy = cast(Sprite2, Enemy);

			waters.remove(w);
			w.destroy();

			if (e.type == "fire"){
				sndFireOut.play();
				enemies.remove(e);
				e.destroy();
			}

//			if (e.type == "fork"){
//				enemies.remove(e);
//				e.destroy();
//			}

		}

		if (sprite1ClassName == "Button" && sprite2ClassName == "Player" && !levelFinished){
			var b:Button = cast(Sprite1, Button);
			var p:Player = cast(Sprite2, Player);

			if (b.water <= p.water && b.pressed == false){
				sndButtonClick.play();
				b.pressButton();

				//Moves blocks with same id
				moveBlock(b.id);
			}
		}

		return true;
	}

	public function killPlayer(){

		if (!isRunning){
			return;
		}

		sndDie.play();
		player.playDeadAnimation();

		isRunning = false;

		lives = lives - 1;

		if (lives < 0){
			gameOverText.visible = true;
			delay(2000);
			goToTitle();
		}else{
			delay(500);
			goToLevel(levelToLoad, lives);
		}

	}

	public function increaseWater(){
		sndWaterFill.play();
		player.addWater();
	}


	public function positionHUD(){
		var camPos = FlxG.camera.scroll;

		lifeIcon.x = camPos.x + 5;
		lifeIcon.y = camPos.y + 5;
		livesText.x = camPos.x + 18;
		livesText.y = camPos.y + 7;
		waterText.x = camPos.x + 90;
		waterText.y = camPos.y + 5;
		gameOverText.x = camPos.x + 200;
		gameOverText.y = camPos.y + 5;
	}

	public function animateWater(){

		if (rainAnimationCoolDown <= 0){
			rainAnimationCoolDown = RAIN_ANIMATION_TIME;

			var tm:FlxTilemap = cast(level.rainLayer.members[0], FlxTilemap);
			var tiles:Array<Int> = tm.getData(false);
			for (i in 0...tiles.length){

				if (tiles[i] != 3 && tiles[i] != 4){
					continue;
				}

				if (tiles[i] == 3){
					tm.setTileByIndex(i,4, true);
				}else{
					tm.setTileByIndex(i,3, true);
				}
			}
		}else{
			rainAnimationCoolDown--;
		}
	}

	public function goToTitle(){
		FlxG.switchState(new TitleState());
	}

	public function goToEnding(){
		FlxG.switchState(new EndingState());
	}

	public function goToLevel(levelToLoad:String, l:Int){

		if (levelToLoad == "end"){
			goToEnding();

		}else{
			PlayState.levelToLoad = levelToLoad;
			PlayState.lives = l;
			FlxG.switchState(new PlayState());
		}
	}

	public function delay(ms:Int){

		FlxG.state.active = false;
		haxe.Timer.delay(function()
		{
			FlxG.state.active = true;
		}, ms);
	}

	public function moveBlock(id:Int){
		for (bl in blocks){
			if (bl.id == id && !bl.moved){
				sndBlockMove.play();
				bl.move();
			}
		}
	}
}
