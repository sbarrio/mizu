package ;

import flixel.FlxObject;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.FlxSprite;

class Water extends FlxSprite
{

    private var GRAVITY:Float = 250.0;
    private var MAX_VELOCITY:Float = 120.0;

    public function new(X:Float = 0.0, Y:Float = 0.0, state:PlayState, facing:Int, accelX:Float, accelY:Float){

        super(X,Y);

        maxVelocity.x = MAX_VELOCITY;
        maxVelocity.y = MAX_VELOCITY;

        //Inherits acceleration from player in case it was moving
        acceleration.x = accelX;
        acceleration.y = accelY;

        this.facing = facing;

        if (facing == FlxObject.LEFT){
            scale.x = -1;
        }

        loadGraphic(AssetPaths.water__png, true, 32, 32);
        alpha = 0.8;

        //bounding box
        width = 20;
        height = 20;
        offset.x = 6;
        offset.y = 6;

    }

    override public function update(elapsed:Float):Void
    {
        super.update(elapsed);

        if (facing == FlxObject.RIGHT){
            acceleration.x += MAX_VELOCITY;
        }else{
            acceleration.x -= MAX_VELOCITY;
        }

        acceleration.y = GRAVITY;
    }


    override public function destroy():Void{
        super.destroy();
    }

}