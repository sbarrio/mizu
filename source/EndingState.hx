package;

import flixel.system.FlxSound;
import flixel.text.FlxText.FlxTextAlign;
import flixel.addons.ui.FlxUIState;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;

class EndingState extends FlxUIState
{
    public var keyPressed:Bool = false;
    public var sndStart:FlxSound;

    override public function create():Void
    {
        super.create();

        var bg:FlxSprite = new FlxSprite();
        bg.x = 0;
        bg.y = -256;
        bg.loadGraphic(AssetPaths.ending_bg__png, true, 640, 512);
        add(bg);

        FlxTween.tween(bg, { x: -320, y: 0 }, 10, { type: FlxTween.LOOPING});

        var text = new FlxText(35,60,300, "THANKS FOR PLAYING!", 18, true);
        //text.setFormat(AssetPaths.PressStart2P__ttf,14,FlxColor.WHITE, FlxTextAlign.CENTER);
        add(text);

        var copyText = new FlxText(120,220,320, "Press any key", 8, true);
        copyText.color = FlxColor.WHITE;
        add(copyText);

    }

    override public function update(elapsed:Float):Void
    {
        super.update(elapsed);

        if (FlxG.keys.firstJustPressed() != -1){
            keyPressed = true;

            //Start level
            delay(500);
            FlxG.switchState(new TitleState());
        }
    }


    public function delay(ms:Int){

        FlxG.state.active = false;
        haxe.Timer.delay(function()
        {
            FlxG.state.active = true;
        }, ms);
    }
}
