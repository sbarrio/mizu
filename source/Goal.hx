package ;

import flixel.FlxObject;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.FlxSprite;

class Goal extends FlxSprite
{

    public var targetLevel:String;


    public function new(X:Float = 0.0, Y:Float = 0.0, target:String){

        super(X,Y);

        makeGraphic(16, 32, FlxColor.PURPLE);
        alpha = 0.6;
        targetLevel = target;

    }

    override public function update(elapsed:Float):Void
    {
        super.update(elapsed);
    }


    override public function destroy():Void{
        super.destroy();
    }

}