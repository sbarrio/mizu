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

class TitleState extends FlxUIState
{
    public var keyPressed:Bool = false;
    public var sndStart:FlxSound;

    override public function create():Void
    {
        super.create();

        var bg:FlxSprite = new FlxSprite();
        bg.x = 0;
        bg.y = -256;
        bg.loadGraphic(AssetPaths.title_bg__png, true, 640, 512);
        add(bg);

        var logo:FlxSprite = new FlxSprite();
        logo.x = 40;
        logo.y = 20;
        logo.loadGraphic(AssetPaths.title_logo_big__png, true, 240, 137);
        add(logo);

        FlxTween.tween(bg, { x: -320, y: 0 }, 10, { type: FlxTween.LOOPING});

        var text = new FlxText(85,150,200, "Press any key", 17, true);
        //text.setFormat(AssetPaths.PressStart2P__ttf,14,FlxColor.WHITE, FlxTextAlign.CENTER);
        add(text);

        var copyText = new FlxText(110,220,320, "LD40 - sbarrio 2017", 8, true);
        copyText.color = FlxColor.WHITE;
        add(copyText);

        //Stop music
        if (FlxG.sound.music != null){
            FlxG.sound.music.stop();
            FlxG.sound.music.destroy();
            FlxG.sound.music = null;
        }

        //SFX
        sndStart = FlxG.sound.load(AssetPaths.start__wav);

    }

    override public function update(elapsed:Float):Void
    {
        super.update(elapsed);

        if (FlxG.keys.firstJustPressed() != -1){
            keyPressed = true;

            sndStart.play();

            //Start level
            delay(500);
            PlayState.levelToLoad = "stage0";
            PlayState.lives = 5;
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
}
