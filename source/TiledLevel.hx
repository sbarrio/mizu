package;

import flixel.addons.tile.FlxTileSpecial;
import flixel.addons.tile.FlxTilemapExt;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.addons.editors.tiled.TiledImageLayer;
import flixel.addons.editors.tiled.TiledImageTile;
import flixel.addons.editors.tiled.TiledLayer.TiledLayerType;
import flixel.addons.editors.tiled.TiledMap;
import flixel.addons.editors.tiled.TiledObject;
import flixel.addons.editors.tiled.TiledObjectLayer;
import flixel.addons.editors.tiled.TiledTileLayer;
import flixel.addons.editors.tiled.TiledTileSet;
import flixel.group.FlxGroup;
import flixel.tile.FlxTilemap;
import haxe.io.Path;


class TiledLevel extends TiledMap
{
	private inline static var c_PATH_LEVEL_TILESHEETS = "assets/images/maps/";
	
	// Array of tilemaps used for collision
	public var platformTiles:FlxGroup;
	public var bgLayer: FlxGroup;
	public var fgLayer: FlxGroup;
	public var rainLayer: FlxGroup;
	public var objectsLayer:FlxGroup;

	public var collidableTileLayers:Array<FlxTilemap>;

	public function new(tiledLevel:Dynamic, state:PlayState)
	{
		super(tiledLevel);

		fgLayer = new FlxGroup();
		rainLayer = new FlxGroup();
		bgLayer = new FlxGroup();
		platformTiles = new FlxGroup();
		objectsLayer = new FlxGroup();

		FlxG.camera.setScrollBoundsRect(0, 0, fullWidth, fullHeight, true);

		// Load Map properties
		
/*		var r:String = properties.get("ReconTime");
		if (r != null){
			reconTime = Std.parseInt(r);
		}else{
			reconTime = DEFAULT_RECON_TIME;
			trace("ReconTime not set!. Set it to default value (" + reconTime + ")");
		}

		var t:String = properties.get("GoalTime");
		if (t != null){
			goalTime = Std.parseFloat(t);
		}else{
			goalTime = DEFAULT_GOAL_TIME;
			trace("GoalTime not set!. Set it to default value (" + goalTime + ")");
		}

		var s:String = properties.get("GoalSteps");
		if (s != null){
			goalSteps = Std.parseInt(s);
		}else{
			goalSteps = DEFAULT_GOAL_STEPS;
			trace("GoalSteps not set!. Set it to default value (" + goalSteps + ")");
		}*/
			
				
		// Load Tile Maps
		for (layer in layers)
		{
			if (layer.type != TiledLayerType.TILE) continue;
			var tileLayer:TiledTileLayer = cast layer;
			
			var tileSheetName:String = tileLayer.properties.get("tileset");
			
			if (tileSheetName == null)
				throw "'tileset' property not defined for the '" + tileLayer.name + "' layer. Please add the property to the layer.";
				
			var tileSet:TiledTileSet = null;
			for (ts in tilesets)
			{
				if (ts.name == tileSheetName)
				{
					tileSet = ts;
					break;
				}
			}
			
			if (tileSet == null)
				throw "Tileset '" + tileSheetName + " not found. Did you misspell the 'tilesheet' property in " + tileLayer.name + "' layer?";
				
			var imagePath 		= new Path(tileSet.imageSource);
			var processedPath 	= c_PATH_LEVEL_TILESHEETS + imagePath.file + "." + imagePath.ext;
			
			var tilemap:FlxTilemap = new FlxTilemapExt();
			tilemap.loadMapFromArray(tileLayer.tileArray, width, height, processedPath,
				tileSet.tileWidth, tileSet.tileHeight, OFF, tileSet.firstGID, 1, 1);

			
			if (tileLayer.name == "bg"){

				bgLayer.add(tilemap);

			}else if (tileLayer.name == "fg"){

				fgLayer.add(tilemap);

			}else if (tileLayer.name == "rain"){

				rainLayer.add(tilemap);
			}else{

				if (collidableTileLayers == null)
					collidableTileLayers = new Array<FlxTilemap>();

				if (tileLayer.name == "platform"){
					platformTiles.add(tilemap);
					collidableTileLayers.push(tilemap);
				}
			}
		}
	}
	
	public function loadObjects(state:PlayState)
	{
		var layer:TiledObjectLayer;
		for (layer in layers)
		{
			//trace(layer.name);
			if (layer.type != TiledLayerType.OBJECT)
				continue;
			var objectLayer:TiledObjectLayer = cast layer;

			for (o in objectLayer.objects)
			{
				//trace("object layer");
				loadObject(state, o, objectLayer, objectsLayer, layer.name);
			}
		}
	}

	private function loadObject(state:PlayState, o:TiledObject, g:TiledObjectLayer, group:FlxGroup,layerName:String)
	{
		var x:Int = o.x;
		var y:Int = o.y;
		
		// objects in tiled are aligned bottom-left (top-left in flixel)
		if (o.gid != -1)
			y -= g.map.getGidOwner(o.gid).tileHeight;
		
		//trace("adding " + layerName + " at " + x + " " + y);
		switch (layerName)
		{
			case "player":
				var player = new Player(x, y, state);
				FlxG.camera.follow(player);
				state.player = player;
			case "goal":
				var targetLevel = o.properties.get("target");
			 	var goal = new Goal(x,y, targetLevel);
				state.goals.add(goal);
				group.add(goal);
			case "button":
				var id:Int = Std.parseInt(o.properties.get("id"));
				var w:Float = Std.parseFloat(o.properties.get("water"));
				var button = new Button(x, y,id, w);
				state.buttons.add(button);
				group.add(button);
			case "block":
				var id:Int = Std.parseInt(o.properties.get("id"));
				var dis:Float = Std.parseFloat(o.properties.get("distance"));
				var dir:Int = Std.parseInt(o.properties.get("direction"));
				var block = new Block(x, y, id, dis, dir);
				state.blocks.add(block);
				group.add(block);
			case "enemy":
				var range:Int = 0;
				if (o.properties.get("range") != null){
					 range = Std.parseInt(o.properties.get("range"));
				}
				var type = o.properties.get("type");
				var enemy = new Enemy(x, y, range, type, state);
				state.enemies.add(enemy);
				group.add(enemy);
		}
	}

	
	public function collideWithLevel(obj:FlxObject, ?notifyCallback:FlxObject->FlxObject->Void, ?processCallback:FlxObject->FlxObject->Bool):Bool
	{
		if (collidableTileLayers == null)
			return false;

		for (map in collidableTileLayers)
		{
			// IMPORTANT: Always collide the map with objects, not the other way around. 
			//			  This prevents odd collision errors (collision separation code off by 1 px).
			if (FlxG.overlap(map, obj, notifyCallback, processCallback != null ? processCallback : FlxObject.separate))
			{
				return true;
			}
		}
		return false;
	}

}