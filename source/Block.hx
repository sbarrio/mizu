package ;

import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxTween;
import flixel.FlxObject;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.FlxSprite;

class Block extends FlxSprite
{

    public var id:Int = 0;
    public var distance:Float = 0;
    public var direction:Int = 0;
    public var moved:Bool = false;

    public function new(X:Float = 0.0, Y:Float = 0.0, identifier:Int, dis:Float, dir:Int){

        super(X,Y);

        loadGraphic(AssetPaths.block__png, true, 64, 64);
        immovable = true;
        id = identifier;
        distance = dis;
        direction = dir;
    }

    override public function update(elapsed:Float):Void
    {
        super.update(elapsed);
    }

    override public function destroy():Void{
        super.destroy();
    }

    public function move(){
        moved = true;

        var targetX:Float = 0;
        var targetY:Float = 0;

        if (direction == FlxObject.UP){
            targetX = x;
            targetY = y - distance;
        }

        if (direction == FlxObject.DOWN){
            targetX = x;
            targetY = y + distance;
        }

        if (direction == FlxObject.LEFT){
            targetX = x - distance;
            targetY = y;
        }

        if (direction == FlxObject.RIGHT){
            targetX = x + distance;
            targetY = y;
        }

        FlxTween.tween(this, { x: targetX, y: targetY }, 2, { type: FlxTween.ONESHOT, ease: FlxEase.expoInOut});
    }

}