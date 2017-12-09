// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Block
#include <Block.h>
#endif
#ifndef INCLUDED_Button
#include <Button.h>
#endif
#ifndef INCLUDED_Enemy
#include <Enemy.h>
#endif
#ifndef INCLUDED_Goal
#include <Goal.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_TiledLevel
#include <TiledLevel.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayer
#include <flixel/addons/editors/tiled/TiledLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayerType
#include <flixel/addons/editors/tiled/TiledLayerType.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObject
#include <flixel/addons/editors/tiled/TiledObject.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObjectLayer
#include <flixel/addons/editors/tiled/TiledObjectLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledPropertySet
#include <flixel/addons/editors/tiled/TiledPropertySet.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTileLayer
#include <flixel/addons/editors/tiled/TiledTileLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTileSet
#include <flixel/addons/editors/tiled/TiledTileSet.h>
#endif
#ifndef INCLUDED_flixel_addons_tile_FlxTilemapExt
#include <flixel/addons/tile/FlxTilemapExt.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapAutoTiling
#include <flixel/tile/FlxTilemapAutoTiling.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_afa3bb20ec4a38c0_35_new,"TiledLevel","new",0x39f0e040,"TiledLevel.new","TiledLevel.hx",35,0x7c3de730)
HX_LOCAL_STACK_FRAME(_hx_pos_afa3bb20ec4a38c0_130_loadObjects,"TiledLevel","loadObjects",0xa9ed172e,"TiledLevel.loadObjects","TiledLevel.hx",130,0x7c3de730)
HX_LOCAL_STACK_FRAME(_hx_pos_afa3bb20ec4a38c0_148_loadObject,"TiledLevel","loadObject",0xaf4159a5,"TiledLevel.loadObject","TiledLevel.hx",148,0x7c3de730)
HX_LOCAL_STACK_FRAME(_hx_pos_afa3bb20ec4a38c0_195_collideWithLevel,"TiledLevel","collideWithLevel",0xbac74e60,"TiledLevel.collideWithLevel","TiledLevel.hx",195,0x7c3de730)
HX_LOCAL_STACK_FRAME(_hx_pos_afa3bb20ec4a38c0_23_boot,"TiledLevel","boot",0x70ec5852,"TiledLevel.boot","TiledLevel.hx",23,0x7c3de730)

void TiledLevel_obj::__construct( ::Dynamic tiledLevel, ::PlayState state){
            	HX_GC_STACKFRAME(&_hx_pos_afa3bb20ec4a38c0_35_new)
HXLINE(  36)		super::__construct(tiledLevel,null());
HXLINE(  38)		this->fgLayer =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  39)		this->rainLayer =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  40)		this->bgLayer =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  41)		this->platformTiles =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  42)		this->objectsLayer =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  44)		::flixel::FlxG_obj::camera->setScrollBoundsRect((int)0,(int)0,this->fullWidth,this->fullHeight,true);
HXLINE(  74)		{
HXLINE(  74)			int _g = (int)0;
HXDLIN(  74)			::Array< ::Dynamic> _g1 = this->layers;
HXDLIN(  74)			while((_g < _g1->length)){
HXLINE(  74)				 ::flixel::addons::editors::tiled::TiledLayer layer = _g1->__get(_g).StaticCast<  ::flixel::addons::editors::tiled::TiledLayer >();
HXDLIN(  74)				_g = (_g + (int)1);
HXLINE(  76)				if (hx::IsNotEq( layer->type,::flixel::addons::editors::tiled::TiledLayerType_obj::TILE_dyn() )) {
HXLINE(  76)					continue;
            				}
HXLINE(  77)				 ::flixel::addons::editors::tiled::TiledTileLayer tileLayer = ( ( ::flixel::addons::editors::tiled::TiledTileLayer)(layer) );
HXLINE(  79)				::String tileSheetName = ( (::String)(::haxe::IMap_obj::get(tileLayer->properties->keys,HX_("tileset",34,81,93,45))) );
HXLINE(  81)				if (hx::IsNull( tileSheetName )) {
HXLINE(  82)					HX_STACK_DO_THROW(((HX_("'tileset' property not defined for the '",b8,ca,8f,c4) + tileLayer->name) + HX_("' layer. Please add the property to the layer.",c0,1d,19,20)));
            				}
HXLINE(  84)				 ::flixel::addons::editors::tiled::TiledTileSet tileSet = null();
HXLINE(  85)				{
HXLINE(  85)					 ::Dynamic ts = this->tilesets->iterator();
HXDLIN(  85)					while(( (bool)(ts->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  85)						 ::flixel::addons::editors::tiled::TiledTileSet ts1 = ( ( ::flixel::addons::editors::tiled::TiledTileSet)(ts->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  87)						if ((ts1->name == tileSheetName)) {
HXLINE(  89)							tileSet = ts1;
HXLINE(  90)							goto _hx_goto_1;
            						}
            					}
            					_hx_goto_1:;
            				}
HXLINE(  94)				if (hx::IsNull( tileSet )) {
HXLINE(  95)					HX_STACK_DO_THROW(((((HX_("Tileset '",1b,32,30,14) + tileSheetName) + HX_(" not found. Did you misspell the 'tilesheet' property in ",08,04,66,5f)) + tileLayer->name) + HX_("' layer?",27,50,0f,42)));
            				}
HXLINE(  97)				 ::haxe::io::Path imagePath =  ::haxe::io::Path_obj::__alloc( HX_CTX ,tileSet->imageSource);
HXLINE(  98)				::String processedPath = (((HX_("assets/images/maps/",6d,5a,1a,f9) + imagePath->file) + HX_(".",2e,00,00,00)) + imagePath->ext);
HXLINE( 100)				 ::flixel::tile::FlxTilemap tilemap =  ::flixel::addons::tile::FlxTilemapExt_obj::__alloc( HX_CTX );
HXLINE( 101)				::Array< int > _hx_tmp = tileLayer->get_tileArray();
HXDLIN( 101)				tilemap->loadMapFromArray(_hx_tmp,this->width,this->height,processedPath,tileSet->tileWidth,tileSet->tileHeight,::flixel::tile::FlxTilemapAutoTiling_obj::OFF_dyn(),tileSet->firstGID,(int)1,(int)1);
HXLINE( 105)				if ((tileLayer->name == HX_("bg",c5,55,00,00))) {
HXLINE( 107)					this->bgLayer->add(tilemap).StaticCast<  ::flixel::FlxBasic >();
            				}
            				else {
HXLINE( 109)					if ((tileLayer->name == HX_("fg",41,59,00,00))) {
HXLINE( 111)						this->fgLayer->add(tilemap).StaticCast<  ::flixel::FlxBasic >();
            					}
            					else {
HXLINE( 113)						if ((tileLayer->name == HX_("rain",54,49,a4,4b))) {
HXLINE( 115)							this->rainLayer->add(tilemap).StaticCast<  ::flixel::FlxBasic >();
            						}
            						else {
HXLINE( 118)							if (hx::IsNull( this->collidableTileLayers )) {
HXLINE( 119)								this->collidableTileLayers = ::Array_obj< ::Dynamic>::__new();
            							}
HXLINE( 121)							if ((tileLayer->name == HX_("platform",b3,b2,f9,67))) {
HXLINE( 122)								this->platformTiles->add(tilemap).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 123)								this->collidableTileLayers->push(tilemap);
            							}
            						}
            					}
            				}
            			}
            		}
            	}

Dynamic TiledLevel_obj::__CreateEmpty() { return new TiledLevel_obj; }

void *TiledLevel_obj::_hx_vtable = 0;

Dynamic TiledLevel_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TiledLevel_obj > _hx_result = new TiledLevel_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TiledLevel_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27f4004e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27f4004e;
	} else {
		return inClassId==(int)0x708f1085;
	}
}

void TiledLevel_obj::loadObjects( ::PlayState state){
            	HX_STACKFRAME(&_hx_pos_afa3bb20ec4a38c0_130_loadObjects)
HXLINE( 131)		 ::flixel::addons::editors::tiled::TiledObjectLayer layer;
HXLINE( 132)		{
HXLINE( 132)			int _g = (int)0;
HXDLIN( 132)			::Array< ::Dynamic> _g1 = this->layers;
HXDLIN( 132)			while((_g < _g1->length)){
HXLINE( 132)				 ::flixel::addons::editors::tiled::TiledLayer layer1 = _g1->__get(_g).StaticCast<  ::flixel::addons::editors::tiled::TiledLayer >();
HXDLIN( 132)				_g = (_g + (int)1);
HXLINE( 135)				if (hx::IsNotEq( layer1->type,::flixel::addons::editors::tiled::TiledLayerType_obj::OBJECT_dyn() )) {
HXLINE( 136)					continue;
            				}
HXLINE( 137)				 ::flixel::addons::editors::tiled::TiledObjectLayer objectLayer = ( ( ::flixel::addons::editors::tiled::TiledObjectLayer)(layer1) );
HXLINE( 139)				{
HXLINE( 139)					int _g2 = (int)0;
HXDLIN( 139)					::Array< ::Dynamic> _g3 = objectLayer->objects;
HXDLIN( 139)					while((_g2 < _g3->length)){
HXLINE( 139)						 ::flixel::addons::editors::tiled::TiledObject o = _g3->__get(_g2).StaticCast<  ::flixel::addons::editors::tiled::TiledObject >();
HXDLIN( 139)						_g2 = (_g2 + (int)1);
HXLINE( 142)						this->loadObject(state,o,objectLayer,this->objectsLayer,layer1->name);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledLevel_obj,loadObjects,(void))

void TiledLevel_obj::loadObject( ::PlayState state, ::flixel::addons::editors::tiled::TiledObject o, ::flixel::addons::editors::tiled::TiledObjectLayer g, ::flixel::group::FlxTypedGroup group,::String layerName){
            	HX_GC_STACKFRAME(&_hx_pos_afa3bb20ec4a38c0_148_loadObject)
HXLINE( 149)		int x = o->x;
HXLINE( 150)		int y = o->y;
HXLINE( 153)		if ((o->gid != (int)-1)) {
HXLINE( 154)			y = (y - g->map->getGidOwner(o->gid)->tileHeight);
            		}
HXLINE( 157)		::String _hx_switch_0 = layerName;
            		if (  (_hx_switch_0==HX_("block",4d,75,fc,b4)) ){
HXLINE( 175)			int id = ::Std_obj::parseInt(( (::String)(::haxe::IMap_obj::get(o->properties->keys,HX_("id",db,5b,00,00))) ));
HXLINE( 176)			Float dis = ::Std_obj::parseFloat(( (::String)(::haxe::IMap_obj::get(o->properties->keys,HX_("distance",35,93,f9,6b))) ));
HXLINE( 177)			int dir = ::Std_obj::parseInt(( (::String)(::haxe::IMap_obj::get(o->properties->keys,HX_("direction",3f,62,40,10))) ));
HXLINE( 178)			 ::Block block =  ::Block_obj::__alloc( HX_CTX ,x,y,id,dis,dir);
HXLINE( 179)			state->blocks->add(block).StaticCast<  ::Block >();
HXLINE( 180)			group->add(block).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 174)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("button",f2,61,e0,d9)) ){
HXLINE( 169)			int id1 = ::Std_obj::parseInt(( (::String)(::haxe::IMap_obj::get(o->properties->keys,HX_("id",db,5b,00,00))) ));
HXLINE( 170)			Float w = ::Std_obj::parseFloat(( (::String)(::haxe::IMap_obj::get(o->properties->keys,HX_("water",17,18,25,c5))) ));
HXLINE( 171)			 ::Button button =  ::Button_obj::__alloc( HX_CTX ,x,y,id1,w);
HXLINE( 172)			state->buttons->add(button).StaticCast<  ::Button >();
HXLINE( 173)			group->add(button).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 168)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("enemy",48,12,7b,70)) ){
HXLINE( 182)			int range = (int)0;
HXLINE( 183)			if (hx::IsNotNull( ( (::String)(::haxe::IMap_obj::get(o->properties->keys,HX_("range",bd,a5,1f,e4))) ) )) {
HXLINE( 184)				range = ::Std_obj::parseInt(( (::String)(::haxe::IMap_obj::get(o->properties->keys,HX_("range",bd,a5,1f,e4))) ));
            			}
HXLINE( 186)			::String type = ( (::String)(::haxe::IMap_obj::get(o->properties->keys,HX_("type",ba,f2,08,4d))) );
HXLINE( 187)			 ::Enemy enemy =  ::Enemy_obj::__alloc( HX_CTX ,x,y,range,type,state);
HXLINE( 188)			state->enemies->add(enemy).StaticCast<  ::Enemy >();
HXLINE( 189)			group->add(enemy).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 181)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("goal",13,89,69,44)) ){
HXLINE( 164)			::String targetLevel = ( (::String)(::haxe::IMap_obj::get(o->properties->keys,HX_("target",51,f3,ec,86))) );
HXLINE( 165)			 ::Goal goal =  ::Goal_obj::__alloc( HX_CTX ,x,y,targetLevel);
HXLINE( 166)			state->goals->add(goal).StaticCast<  ::Goal >();
HXLINE( 167)			group->add(goal).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 163)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("player",61,eb,b8,37)) ){
HXLINE( 160)			 ::Player player =  ::Player_obj::__alloc( HX_CTX ,x,y,state);
HXLINE( 161)			::flixel::FlxG_obj::camera->follow(player,null(),null());
HXLINE( 162)			state->player = player;
HXLINE( 159)			goto _hx_goto_6;
            		}
            		_hx_goto_6:;
            	}


HX_DEFINE_DYNAMIC_FUNC5(TiledLevel_obj,loadObject,(void))

bool TiledLevel_obj::collideWithLevel( ::flixel::FlxObject obj, ::Dynamic notifyCallback, ::Dynamic processCallback){
            	HX_STACKFRAME(&_hx_pos_afa3bb20ec4a38c0_195_collideWithLevel)
HXLINE( 196)		if (hx::IsNull( this->collidableTileLayers )) {
HXLINE( 197)			return false;
            		}
HXLINE( 199)		{
HXLINE( 199)			int _g = (int)0;
HXDLIN( 199)			::Array< ::Dynamic> _g1 = this->collidableTileLayers;
HXDLIN( 199)			while((_g < _g1->length)){
HXLINE( 199)				 ::flixel::tile::FlxTilemap map = _g1->__get(_g).StaticCast<  ::flixel::tile::FlxTilemap >();
HXDLIN( 199)				_g = (_g + (int)1);
HXLINE( 203)				 ::Dynamic _hx_tmp;
HXDLIN( 203)				if (hx::IsNotNull( processCallback )) {
HXLINE( 203)					_hx_tmp = processCallback;
            				}
            				else {
HXLINE( 203)					_hx_tmp = ::flixel::FlxObject_obj::separate_dyn();
            				}
HXDLIN( 203)				if (::flixel::FlxG_obj::overlap(map,obj,notifyCallback,_hx_tmp)) {
HXLINE( 205)					return true;
            				}
            			}
            		}
HXLINE( 208)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(TiledLevel_obj,collideWithLevel,return )

::String TiledLevel_obj::c_PATH_LEVEL_TILESHEETS;


hx::ObjectPtr< TiledLevel_obj > TiledLevel_obj::__new( ::Dynamic tiledLevel, ::PlayState state) {
	hx::ObjectPtr< TiledLevel_obj > __this = new TiledLevel_obj();
	__this->__construct(tiledLevel,state);
	return __this;
}

hx::ObjectPtr< TiledLevel_obj > TiledLevel_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic tiledLevel, ::PlayState state) {
	TiledLevel_obj *__this = (TiledLevel_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TiledLevel_obj), true, "TiledLevel"));
	*(void **)__this = TiledLevel_obj::_hx_vtable;
	__this->__construct(tiledLevel,state);
	return __this;
}

TiledLevel_obj::TiledLevel_obj()
{
}

void TiledLevel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledLevel);
	HX_MARK_MEMBER_NAME(platformTiles,"platformTiles");
	HX_MARK_MEMBER_NAME(bgLayer,"bgLayer");
	HX_MARK_MEMBER_NAME(fgLayer,"fgLayer");
	HX_MARK_MEMBER_NAME(rainLayer,"rainLayer");
	HX_MARK_MEMBER_NAME(objectsLayer,"objectsLayer");
	HX_MARK_MEMBER_NAME(collidableTileLayers,"collidableTileLayers");
	 ::flixel::addons::editors::tiled::TiledMap_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TiledLevel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(platformTiles,"platformTiles");
	HX_VISIT_MEMBER_NAME(bgLayer,"bgLayer");
	HX_VISIT_MEMBER_NAME(fgLayer,"fgLayer");
	HX_VISIT_MEMBER_NAME(rainLayer,"rainLayer");
	HX_VISIT_MEMBER_NAME(objectsLayer,"objectsLayer");
	HX_VISIT_MEMBER_NAME(collidableTileLayers,"collidableTileLayers");
	 ::flixel::addons::editors::tiled::TiledMap_obj::__Visit(HX_VISIT_ARG);
}

hx::Val TiledLevel_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"bgLayer") ) { return hx::Val( bgLayer ); }
		if (HX_FIELD_EQ(inName,"fgLayer") ) { return hx::Val( fgLayer ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rainLayer") ) { return hx::Val( rainLayer ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loadObject") ) { return hx::Val( loadObject_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadObjects") ) { return hx::Val( loadObjects_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"objectsLayer") ) { return hx::Val( objectsLayer ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"platformTiles") ) { return hx::Val( platformTiles ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"collideWithLevel") ) { return hx::Val( collideWithLevel_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"collidableTileLayers") ) { return hx::Val( collidableTileLayers ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TiledLevel_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"bgLayer") ) { bgLayer=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fgLayer") ) { fgLayer=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rainLayer") ) { rainLayer=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"objectsLayer") ) { objectsLayer=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"platformTiles") ) { platformTiles=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"collidableTileLayers") ) { collidableTileLayers=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledLevel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("platformTiles","\xd2","\x11","\xe5","\xcc"));
	outFields->push(HX_HCSTRING("bgLayer","\xcc","\x91","\xe7","\x1c"));
	outFields->push(HX_HCSTRING("fgLayer","\xd0","\x6c","\x3d","\xc3"));
	outFields->push(HX_HCSTRING("rainLayer","\xdd","\x57","\x1b","\xa8"));
	outFields->push(HX_HCSTRING("objectsLayer","\x5d","\x08","\x6e","\xa3"));
	outFields->push(HX_HCSTRING("collidableTileLayers","\xd1","\x36","\x80","\x6f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TiledLevel_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(TiledLevel_obj,platformTiles),HX_HCSTRING("platformTiles","\xd2","\x11","\xe5","\xcc")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(TiledLevel_obj,bgLayer),HX_HCSTRING("bgLayer","\xcc","\x91","\xe7","\x1c")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(TiledLevel_obj,fgLayer),HX_HCSTRING("fgLayer","\xd0","\x6c","\x3d","\xc3")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(TiledLevel_obj,rainLayer),HX_HCSTRING("rainLayer","\xdd","\x57","\x1b","\xa8")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(TiledLevel_obj,objectsLayer),HX_HCSTRING("objectsLayer","\x5d","\x08","\x6e","\xa3")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledLevel_obj,collidableTileLayers),HX_HCSTRING("collidableTileLayers","\xd1","\x36","\x80","\x6f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo TiledLevel_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &TiledLevel_obj::c_PATH_LEVEL_TILESHEETS,HX_HCSTRING("c_PATH_LEVEL_TILESHEETS","\xdb","\x83","\x1a","\xf5")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String TiledLevel_obj_sMemberFields[] = {
	HX_HCSTRING("platformTiles","\xd2","\x11","\xe5","\xcc"),
	HX_HCSTRING("bgLayer","\xcc","\x91","\xe7","\x1c"),
	HX_HCSTRING("fgLayer","\xd0","\x6c","\x3d","\xc3"),
	HX_HCSTRING("rainLayer","\xdd","\x57","\x1b","\xa8"),
	HX_HCSTRING("objectsLayer","\x5d","\x08","\x6e","\xa3"),
	HX_HCSTRING("collidableTileLayers","\xd1","\x36","\x80","\x6f"),
	HX_HCSTRING("loadObjects","\x4e","\x27","\xed","\x52"),
	HX_HCSTRING("loadObject","\x85","\xad","\x6a","\xca"),
	HX_HCSTRING("collideWithLevel","\x40","\xca","\xf8","\xf2"),
	::String(null()) };

static void TiledLevel_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledLevel_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TiledLevel_obj::c_PATH_LEVEL_TILESHEETS,"c_PATH_LEVEL_TILESHEETS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TiledLevel_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledLevel_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TiledLevel_obj::c_PATH_LEVEL_TILESHEETS,"c_PATH_LEVEL_TILESHEETS");
};

#endif

hx::Class TiledLevel_obj::__mClass;

static ::String TiledLevel_obj_sStaticFields[] = {
	HX_HCSTRING("c_PATH_LEVEL_TILESHEETS","\xdb","\x83","\x1a","\xf5"),
	::String(null())
};

void TiledLevel_obj::__register()
{
	hx::Object *dummy = new TiledLevel_obj;
	TiledLevel_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("TiledLevel","\x4e","\x00","\xf4","\x27");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TiledLevel_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(TiledLevel_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TiledLevel_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TiledLevel_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TiledLevel_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TiledLevel_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TiledLevel_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TiledLevel_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_afa3bb20ec4a38c0_23_boot)
HXDLIN(  23)		c_PATH_LEVEL_TILESHEETS = HX_("assets/images/maps/",6d,5a,1a,f9);
            	}
}
