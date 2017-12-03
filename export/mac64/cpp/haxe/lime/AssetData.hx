package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/music/stage.wav", "assets/music/stage.wav");
			type.set ("assets/music/stage.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/images/maps/tile.png", "assets/images/maps/tile.png");
			type.set ("assets/images/maps/tile.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/icon.png", "assets/images/icon.png");
			type.set ("assets/images/icon.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/ending_bg.png", "assets/images/ending_bg.png");
			type.set ("assets/images/ending_bg.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/fire.png", "assets/images/fire.png");
			type.set ("assets/images/fire.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/spike.png", "assets/images/spike.png");
			type.set ("assets/images/spike.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/title_logo_big.png", "assets/images/title_logo_big.png");
			type.set ("assets/images/title_logo_big.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/block.png", "assets/images/block.png");
			type.set ("assets/images/block.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/splash.png", "assets/images/splash.png");
			type.set ("assets/images/splash.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/title_logo.png", "assets/images/title_logo.png");
			type.set ("assets/images/title_logo.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/water.png", "assets/images/water.png");
			type.set ("assets/images/water.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/title_bg.png", "assets/images/title_bg.png");
			type.set ("assets/images/title_bg.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/player.piskel", "assets/images/player.piskel");
			type.set ("assets/images/player.piskel", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/fork.png", "assets/images/fork.png");
			type.set ("assets/images/fork.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/button.png", "assets/images/button.png");
			type.set ("assets/images/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/player.png", "assets/images/player.png");
			type.set ("assets/images/player.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/sounds/hurt.wav", "assets/sounds/hurt.wav");
			type.set ("assets/sounds/hurt.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/fire_out.wav", "assets/sounds/fire_out.wav");
			type.set ("assets/sounds/fire_out.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/water_out.wav", "assets/sounds/water_out.wav");
			type.set ("assets/sounds/water_out.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/jump.wav", "assets/sounds/jump.wav");
			type.set ("assets/sounds/jump.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/buttonPressed.wav", "assets/sounds/buttonPressed.wav");
			type.set ("assets/sounds/buttonPressed.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/water_fill.wav", "assets/sounds/water_fill.wav");
			type.set ("assets/sounds/water_fill.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/grounded.wav", "assets/sounds/grounded.wav");
			type.set ("assets/sounds/grounded.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/level_complete.wav", "assets/sounds/level_complete.wav");
			type.set ("assets/sounds/level_complete.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/start.wav", "assets/sounds/start.wav");
			type.set ("assets/sounds/start.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/block_move.wav", "assets/sounds/block_move.wav");
			type.set ("assets/sounds/block_move.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/font/PressStart2P.svg", "assets/font/PressStart2P.svg");
			type.set ("assets/font/PressStart2P.svg", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/font/PressStart2P.woff", "assets/font/PressStart2P.woff");
			type.set ("assets/font/PressStart2P.woff", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/font/PressStart2P.ttf", "assets/font/PressStart2P.ttf");
			type.set ("assets/font/PressStart2P.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/font/PressStart2P.eot", "assets/font/PressStart2P.eot");
			type.set ("assets/font/PressStart2P.eot", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/data/maps/test.tmx", "assets/data/maps/test.tmx");
			type.set ("assets/data/maps/test.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/maps/stage0.tmx", "assets/data/maps/stage0.tmx");
			type.set ("assets/data/maps/stage0.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/maps/stage1.tmx", "assets/data/maps/stage1.tmx");
			type.set ("assets/data/maps/stage1.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/maps/stage3.tmx", "assets/data/maps/stage3.tmx");
			type.set ("assets/data/maps/stage3.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/maps/stage2.tmx", "assets/data/maps/stage2.tmx");
			type.set ("assets/data/maps/stage2.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("flixel/sounds/beep.ogg", "flixel/sounds/beep.ogg");
			type.set ("flixel/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/sounds/flixel.ogg", "flixel/sounds/flixel.ogg");
			type.set ("flixel/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/fonts/nokiafc22.ttf", "flixel/fonts/nokiafc22.ttf");
			type.set ("flixel/fonts/nokiafc22.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/fonts/monsterrat.ttf", "flixel/fonts/monsterrat.ttf");
			type.set ("flixel/fonts/monsterrat.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/images/ui/button.png", "flixel/images/ui/button.png");
			type.set ("flixel/images/ui/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/images/logo/default.png", "flixel/images/logo/default.png");
			type.set ("flixel/images/logo/default.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/dropdown_mark.png", "flixel/flixel-ui/img/dropdown_mark.png");
			type.set ("flixel/flixel-ui/img/dropdown_mark.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/plus_mark.png", "flixel/flixel-ui/img/plus_mark.png");
			type.set ("flixel/flixel-ui/img/plus_mark.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/radio.png", "flixel/flixel-ui/img/radio.png");
			type.set ("flixel/flixel-ui/img/radio.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/button_arrow_left.png", "flixel/flixel-ui/img/button_arrow_left.png");
			type.set ("flixel/flixel-ui/img/button_arrow_left.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/button_thin.png", "flixel/flixel-ui/img/button_thin.png");
			type.set ("flixel/flixel-ui/img/button_thin.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/tab.png", "flixel/flixel-ui/img/tab.png");
			type.set ("flixel/flixel-ui/img/tab.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/finger_big.png", "flixel/flixel-ui/img/finger_big.png");
			type.set ("flixel/flixel-ui/img/finger_big.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/invis.png", "flixel/flixel-ui/img/invis.png");
			type.set ("flixel/flixel-ui/img/invis.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/chrome_inset.png", "flixel/flixel-ui/img/chrome_inset.png");
			type.set ("flixel/flixel-ui/img/chrome_inset.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/tooltip_arrow.png", "flixel/flixel-ui/img/tooltip_arrow.png");
			type.set ("flixel/flixel-ui/img/tooltip_arrow.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/button_arrow_right.png", "flixel/flixel-ui/img/button_arrow_right.png");
			type.set ("flixel/flixel-ui/img/button_arrow_right.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/radio_dot.png", "flixel/flixel-ui/img/radio_dot.png");
			type.set ("flixel/flixel-ui/img/radio_dot.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/chrome.png", "flixel/flixel-ui/img/chrome.png");
			type.set ("flixel/flixel-ui/img/chrome.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/check_box.png", "flixel/flixel-ui/img/check_box.png");
			type.set ("flixel/flixel-ui/img/check_box.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/button_toggle.png", "flixel/flixel-ui/img/button_toggle.png");
			type.set ("flixel/flixel-ui/img/button_toggle.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/button_arrow_up.png", "flixel/flixel-ui/img/button_arrow_up.png");
			type.set ("flixel/flixel-ui/img/button_arrow_up.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/minus_mark.png", "flixel/flixel-ui/img/minus_mark.png");
			type.set ("flixel/flixel-ui/img/minus_mark.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/chrome_flat.png", "flixel/flixel-ui/img/chrome_flat.png");
			type.set ("flixel/flixel-ui/img/chrome_flat.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/swatch.png", "flixel/flixel-ui/img/swatch.png");
			type.set ("flixel/flixel-ui/img/swatch.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/chrome_light.png", "flixel/flixel-ui/img/chrome_light.png");
			type.set ("flixel/flixel-ui/img/chrome_light.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/hilight.png", "flixel/flixel-ui/img/hilight.png");
			type.set ("flixel/flixel-ui/img/hilight.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/check_mark.png", "flixel/flixel-ui/img/check_mark.png");
			type.set ("flixel/flixel-ui/img/check_mark.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/tab_back.png", "flixel/flixel-ui/img/tab_back.png");
			type.set ("flixel/flixel-ui/img/tab_back.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/box.png", "flixel/flixel-ui/img/box.png");
			type.set ("flixel/flixel-ui/img/box.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/finger_small.png", "flixel/flixel-ui/img/finger_small.png");
			type.set ("flixel/flixel-ui/img/finger_small.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/button.png", "flixel/flixel-ui/img/button.png");
			type.set ("flixel/flixel-ui/img/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/button_arrow_down.png", "flixel/flixel-ui/img/button_arrow_down.png");
			type.set ("flixel/flixel-ui/img/button_arrow_down.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/xml/default_popup.xml", "flixel/flixel-ui/xml/default_popup.xml");
			type.set ("flixel/flixel-ui/xml/default_popup.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("flixel/flixel-ui/xml/default_loading_screen.xml", "flixel/flixel-ui/xml/default_loading_screen.xml");
			type.set ("flixel/flixel-ui/xml/default_loading_screen.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("flixel/flixel-ui/xml/defaults.xml", "flixel/flixel-ui/xml/defaults.xml");
			type.set ("flixel/flixel-ui/xml/defaults.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
