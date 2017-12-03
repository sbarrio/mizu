package ;

import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxTween;
import flixel.FlxObject;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.FlxSprite;

class Button extends FlxSprite
{

    public var id:Int = 0;
    public var water:Float = 0;
    public var pressed:Bool = false;

    public function new(X:Float = 0.0, Y:Float = 0.0, identifier:Int, w:Float){

        super(X,Y);

        loadGraphic(AssetPaths.button__png, true, 32, 16);
        immovable = true;
        id = identifier;
        water = w;
    }

    override public function update(elapsed:Float):Void
    {
        super.update(elapsed);
    }

    override public function destroy():Void{
        super.destroy();
    }

    public function pressButton(){
        pressed = true;
        FlxTween.tween(this, { x: x, y: y + 16 }, 1, { type: FlxTween.ONESHOT, ease: FlxEase.bounceInOut});
    }

}