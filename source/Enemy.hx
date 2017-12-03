package ;

import flixel.util.FlxPath;
import flixel.math.FlxPoint;
import flixel.FlxObject;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.FlxSprite;

class Enemy extends FlxSprite
{

    public var type:String;
    public var oldX:Float;

    public function new(X:Float = 0.0, Y:Float = 0.0, range:Int, tp:String, state:PlayState){

        super(X,Y);

        facing = FlxObject.LEFT;

        type = tp;

        if (type == "spike"){
            loadGraphic(AssetPaths.spike__png, true, 16, 16);
        }

        if (type == "fork"){
            loadGraphic(AssetPaths.fork__png, true, 16, 32);
            this.animation.add("walk", [0,1, 2, 3, 4], 8, true);
            animation.play("walk");
            width = 8;
            height = 32;
            offset.x = 4;
            offset.y = 0;
        }

        if (type == "fire"){
            loadGraphic(AssetPaths.fire__png, true, 16, 16);
            this.animation.add("idle", [0,1, 2, 3], 8, true);
            animation.play("idle");
        }


        var destination:FlxPoint;
        immovable = true;
        destination = getMidpoint();
        destination.x += range;
        path = new FlxPath().start([getMidpoint(), destination], 40, FlxPath.YOYO);
    }

    override public function update(elapsed:Float):Void
    {
        super.update(elapsed);

        if (type == "fork" && oldX > x){
            scale.x = 1;
        }else{
            scale.x = -1;
        }

        oldX = x;

    }


    override public function destroy():Void{
        super.destroy();
    }

}