package;

import flixel.system.FlxSound;
import flixel.system.FlxSound;
import flixel.FlxObject;
import flixel.math.FlxPoint;
import flixel.util.FlxCollision;
import flixel.math.FlxRect;
import flixel.FlxObject;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.FlxSprite;

class Player extends FlxSprite
{
    //Constants
    private var MAX_VELOCITY:Float = 100.0;
    private var GRAVITY:Float = 500.0;
    private var JUMP_FACTOR = 0.50;
    private var MAX_WATER:Float = 100.0;
    private var WATER_INCREASE:Float = 0.5;
    private var THROW_WATER_COOLDOWN_TIME:Int = 40;

    private var WATER_LEVEL_0:Float = 0;
    private var WATER_LEVEL_1:Float = 25;
    private var WATER_LEVEL_2:Float = 50;
    private var WATER_LEVEL_3:Float = 75;
    private var WATER_LEVEL_4:Float = 100;

    //Movement constamts

    private var DRAG_LEVEL_0:Float;
    private var DRAG_LEVEL_1:Float;
    private var DRAG_LEVEL_2:Float;
    private var DRAG_LEVEL_3:Float;
    private var DRAG_LEVEL_4:Float;

    private var GRAVITY_LEVEL_0:Float;
    private var GRAVITY_LEVEL_1:Float;
    private var GRAVITY_LEVEL_2:Float;
    private var GRAVITY_LEVEL_3:Float;
    private var GRAVITY_LEVEL_4:Float;

    private var JUMP_FACTOR_LEVEL_0:Float;
    private var JUMP_FACTOR_LEVEL_1:Float;
    private var JUMP_FACTOR_LEVEL_2:Float;
    private var JUMP_FACTOR_LEVEL_3:Float;
    private var JUMP_FACTOR_LEVEL_4:Float;

    //Control
    public var isReadyToJump:Bool = false;
    public var animFinished:Bool = true;
    public var throwWaterCoolDownTime:Int = 0;
    public var isReadyToThrowWater:Bool = true;

    public var currentDrag:Float;
    public var currentGravity:Float;
    public var currentJumpFactor:Float;

    //Water
    public var water:Float = 0;

    //State
    private var playState:PlayState;

    //SFX
    public var sndJump:FlxSound;
    public var sndWaterOut:FlxSound;
    public var sndGrounded:FlxSound;

    public function new(X:Float = 0.0, Y:Float = 0.0, state:PlayState){
        super(X,Y);

        playState = state;

        //Constant init
        DRAG_LEVEL_0 = MAX_VELOCITY * 4;
        DRAG_LEVEL_1 = MAX_VELOCITY * 3;
        DRAG_LEVEL_2 = MAX_VELOCITY * 2;
        DRAG_LEVEL_3 = MAX_VELOCITY * 1.2;
        DRAG_LEVEL_4 = MAX_VELOCITY;

        GRAVITY_LEVEL_0 = GRAVITY;
        GRAVITY_LEVEL_1 = GRAVITY * 1.2;
        GRAVITY_LEVEL_2 = GRAVITY * 1.5;
        GRAVITY_LEVEL_3 = GRAVITY * 1.7;
        GRAVITY_LEVEL_4 = GRAVITY * 2;

        JUMP_FACTOR_LEVEL_0 = 0.50;
        JUMP_FACTOR_LEVEL_1 = 0.40;
        JUMP_FACTOR_LEVEL_2 = 0.30;
        JUMP_FACTOR_LEVEL_3 = 0.25;
        JUMP_FACTOR_LEVEL_4 = 0.18;

        currentDrag = DRAG_LEVEL_0;
        currentGravity = GRAVITY_LEVEL_0;
        currentJumpFactor = JUMP_FACTOR_LEVEL_0;

        maxVelocity.x = MAX_VELOCITY;
        drag.x = currentDrag;
        acceleration.y = currentGravity;

        loadGraphic(AssetPaths.player__png, true, 32, 32);


        setFacingFlip(FlxObject.RIGHT, false, false);
        setFacingFlip(FlxObject.LEFT, true, false);

        //bounding box
        width = 20;
        height = 20;
        offset.x = 6;
        offset.y = 12;

        //animations

        //IDLE
        this.animation.add("idle0", [0, 1], 3, true);
        this.animation.add("idle1", [2, 3], 3, true);
        this.animation.add("idle2", [4, 5], 3, true);
        this.animation.add("idle3", [6, 7], 3, true);
        this.animation.add("idle4", [8, 9], 3, true);

        //WALK

		this.animation.add("walk0", [12, 13, 14, 15, 16, 17], 8, false);
        this.animation.add("walk1", [18,19, 20, 21, 22, 23], 8, false);
        this.animation.add("walk2", [24,25, 26, 27, 28, 29], 8, false);
        this.animation.add("walk3", [30,31, 32, 33, 34, 35], 8, false);
        this.animation.add("walk4", [36,37, 38, 39, 40, 41], 8, false);

		this.animation.add("jump0",[42],1,false);
        this.animation.add("jump1",[43],1,false);
        this.animation.add("jump2",[44],1,false);
        this.animation.add("jump3",[45],1,false);
        this.animation.add("jump4",[46],1,false);

        this.animation.add("dead",[47],6,false);

        //SFX
        sndJump = FlxG.sound.load(AssetPaths.jump__wav);
        sndWaterOut = FlxG.sound.load(AssetPaths.water_out__wav);
        sndGrounded = FlxG.sound.load(AssetPaths.grounded__wav);
    }

    override public function update(elapsed:Float):Void
    {
        //State
        //Adjust jumpPower, speed and weight according to amount of water (adjust sprites as well)
        if (water < WATER_LEVEL_1){
            currentGravity = GRAVITY_LEVEL_0;
            currentDrag = DRAG_LEVEL_0;
            currentJumpFactor = JUMP_FACTOR_LEVEL_0;
        }

        if (water > WATER_LEVEL_1 && water < WATER_LEVEL_2){
            currentGravity = GRAVITY_LEVEL_1;
            currentDrag = DRAG_LEVEL_1;
            currentJumpFactor = JUMP_FACTOR_LEVEL_1;
        }

        if (water > WATER_LEVEL_2 && water < WATER_LEVEL_3){
            currentGravity = GRAVITY_LEVEL_2;
            currentDrag = DRAG_LEVEL_2;
            currentJumpFactor = JUMP_FACTOR_LEVEL_2;
        }

        if (water > WATER_LEVEL_3 && water < WATER_LEVEL_4){
            currentGravity = GRAVITY_LEVEL_3;
            currentDrag = DRAG_LEVEL_3;
            currentJumpFactor = JUMP_FACTOR_LEVEL_3;
        }

        if (water >= WATER_LEVEL_4){
            currentGravity = GRAVITY_LEVEL_4;
            currentDrag = DRAG_LEVEL_4;
            currentJumpFactor = JUMP_FACTOR_LEVEL_4;
        }

        acceleration.x = 0;
        acceleration.y = currentGravity;

        if (!isTouching(FlxObject.DOWN)){
            isReadyToJump = false;
        }

        if (isTouching(FlxObject.DOWN) && velocity.y == 0 && !isReadyToJump){
            isReadyToJump = true;
        }

        //INPUT
        if (FlxG.keys.pressed.LEFT)
        {
            moveLeft();
        }

        if (FlxG.keys.pressed.RIGHT)
        {
            moveRight();
        }

        if (FlxG.keys.justPressed.Z && isReadyToJump){
            sndJump.play();
            jump();
        }

        if (FlxG.keys.justPressed.X && isReadyToThrowWater){
            throwWater();
        }

        if (throwWaterCoolDownTime > 0){
            throwWaterCoolDownTime--;
        }else{
            isReadyToThrowWater = true;
        }

        //Animation
        var animFinished = true;
        if (animation.curAnim != null && !animation.curAnim.finished){
            animFinished = false;
        }

        if (velocity.x !=0 && isReadyToJump){
            //animation.play("walk");
            playWalkAnimation(water);
        }

        if (velocity.x == 0 && isReadyToJump){
            playIdleAnimation(water);
        }

        if (velocity.y != 0) {
            playJumpAnimation(water);
        }

        super.update(elapsed);
    }

    private function moveRight():Void{
        facing = FlxObject.RIGHT;
        acceleration.x += currentDrag;
    }

    private function moveLeft():Void{
        facing = FlxObject.LEFT;
        acceleration.x -= currentDrag;
    }

    private function jump():Void{
        velocity.y = -acceleration.y * currentJumpFactor;
        isReadyToJump = false;
    }

    private function throwWater():Void{

        if (water <= WATER_LEVEL_1 || !isReadyToThrowWater || !playState.canThrowWater){
            return;
        }

        sndWaterOut.play();

        isReadyToThrowWater = false;

        throwWaterCoolDownTime = THROW_WATER_COOLDOWN_TIME;
        water = 0;

        //throw water in direction is facing
        var wx = x;
        var wy = y - 16;
        if (facing == FlxObject.LEFT){
            wx -= 32;
        }else{
            wx += 32;
        }

        var w = new Water(wx, wy, playState, facing, acceleration.x, acceleration.y);
        playState.waters.add(w);
    }

    public function addWater():Void{
        water += WATER_INCREASE;
        if (water > MAX_WATER){
            water = MAX_WATER;
        }
    }

    override public function destroy():Void{
        super.destroy();
    }

    public function playIdleAnimation(w:Float){

        if (w < WATER_LEVEL_1){
            animation.play("idle0");
        }

        if (w > WATER_LEVEL_1 && w < WATER_LEVEL_2){
            animation.play("idle1");
        }

        if (w > WATER_LEVEL_2 && w < WATER_LEVEL_3){
            animation.play("idle2");
        }

        if (w > WATER_LEVEL_3 && w < WATER_LEVEL_4){
            animation.play("idle3");
        }

        if (w >= WATER_LEVEL_4){
            animation.play("idle4");
        }
    }

    public function playWalkAnimation(w:Float){

        if (w < WATER_LEVEL_1){
            animation.play("walk0");
        }

        if (w > WATER_LEVEL_1 && w < WATER_LEVEL_2){
            animation.play("walk1");
        }

        if (w > WATER_LEVEL_2 && w < WATER_LEVEL_3){
            animation.play("walk2");
        }

        if (w > WATER_LEVEL_3 && w < WATER_LEVEL_4){
            animation.play("walk3");
        }

        if (w >= WATER_LEVEL_4){
            animation.play("walk4");
        }
    }

    public function playJumpAnimation(w:Float){

        if (w < WATER_LEVEL_1){
            animation.play("jump0");
        }

        if (w > WATER_LEVEL_1 && w < WATER_LEVEL_2){
            animation.play("jump1");
        }

        if (w > WATER_LEVEL_2 && w < WATER_LEVEL_3){
            animation.play("jump2");
        }

        if (w > WATER_LEVEL_3 && w < WATER_LEVEL_4){
            animation.play("jump3");
        }

        if (w >= WATER_LEVEL_4){
            animation.play("jump4");
        }
    }

    public function playDeadAnimation(){
        animation.play("dead");
    }
}
