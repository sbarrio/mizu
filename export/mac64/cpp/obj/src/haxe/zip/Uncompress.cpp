// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_zip_FlushMode
#include <haxe/zip/FlushMode.h>
#endif
#ifndef INCLUDED_haxe_zip_Uncompress
#include <haxe/zip/Uncompress.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5c4f2394ea68a40f_29_new,"haxe.zip.Uncompress","new",0x34f307c2,"haxe.zip.Uncompress.new","/usr/local/lib/haxe/std/cpp/_std/haxe/zip/Uncompress.hx",29,0x2e2bbf2e)
HX_LOCAL_STACK_FRAME(_hx_pos_5c4f2394ea68a40f_33_execute,"haxe.zip.Uncompress","execute",0xb3589a97,"haxe.zip.Uncompress.execute","/usr/local/lib/haxe/std/cpp/_std/haxe/zip/Uncompress.hx",33,0x2e2bbf2e)
HX_LOCAL_STACK_FRAME(_hx_pos_5c4f2394ea68a40f_37_setFlushMode,"haxe.zip.Uncompress","setFlushMode",0xbecba0a3,"haxe.zip.Uncompress.setFlushMode","/usr/local/lib/haxe/std/cpp/_std/haxe/zip/Uncompress.hx",37,0x2e2bbf2e)
HX_LOCAL_STACK_FRAME(_hx_pos_5c4f2394ea68a40f_41_close,"haxe.zip.Uncompress","close",0x4cc86b9a,"haxe.zip.Uncompress.close","/usr/local/lib/haxe/std/cpp/_std/haxe/zip/Uncompress.hx",41,0x2e2bbf2e)
HX_LOCAL_STACK_FRAME(_hx_pos_5c4f2394ea68a40f_44_run,"haxe.zip.Uncompress","run",0x34f61ead,"haxe.zip.Uncompress.run","/usr/local/lib/haxe/std/cpp/_std/haxe/zip/Uncompress.hx",44,0x2e2bbf2e)
namespace haxe{
namespace zip{

void Uncompress_obj::__construct( ::Dynamic windowBits){
            	HX_STACKFRAME(&_hx_pos_5c4f2394ea68a40f_29_new)
HXDLIN(  29)		this->s = _hx_inflate_init(windowBits);
            	}

Dynamic Uncompress_obj::__CreateEmpty() { return new Uncompress_obj; }

void *Uncompress_obj::_hx_vtable = 0;

Dynamic Uncompress_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Uncompress_obj > _hx_result = new Uncompress_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Uncompress_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x37d352ce;
}

 ::Dynamic Uncompress_obj::execute( ::haxe::io::Bytes src,int srcPos, ::haxe::io::Bytes dst,int dstPos){
            	HX_STACKFRAME(&_hx_pos_5c4f2394ea68a40f_33_execute)
HXDLIN(  33)		return _hx_inflate_buffer(this->s,src->b,srcPos,dst->b,dstPos);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Uncompress_obj,execute,return )

void Uncompress_obj::setFlushMode( ::haxe::zip::FlushMode f){
            	HX_STACKFRAME(&_hx_pos_5c4f2394ea68a40f_37_setFlushMode)
HXDLIN(  37)		 ::Dynamic _hx_tmp = this->s;
HXDLIN(  37)		_hx_zip_set_flush_mode(_hx_tmp,( (::String)(f->__Tag()) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Uncompress_obj,setFlushMode,(void))

void Uncompress_obj::close(){
            	HX_STACKFRAME(&_hx_pos_5c4f2394ea68a40f_41_close)
HXDLIN(  41)		_hx_inflate_end(this->s);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Uncompress_obj,close,(void))

 ::haxe::io::Bytes Uncompress_obj::run( ::haxe::io::Bytes src, ::Dynamic bufsize){
            	HX_GC_STACKFRAME(&_hx_pos_5c4f2394ea68a40f_44_run)
HXLINE(  45)		 ::haxe::zip::Uncompress u =  ::haxe::zip::Uncompress_obj::__alloc( HX_CTX ,null());
HXLINE(  46)		if (hx::IsNull( bufsize )) {
HXLINE(  46)			bufsize = (int)65536;
            		}
HXLINE(  47)		 ::haxe::io::Bytes tmp = ::haxe::io::Bytes_obj::alloc(bufsize);
HXLINE(  48)		 ::haxe::io::BytesBuffer b =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
HXLINE(  49)		int pos = (int)0;
HXLINE(  50)		u->setFlushMode(::haxe::zip::FlushMode_obj::SYNC_dyn());
HXLINE(  51)		while(true){
HXLINE(  52)			 ::Dynamic r = u->execute(src,pos,tmp,(int)0);
HXLINE(  53)			{
HXLINE(  53)				int len = ( (int)(r->__Field(HX_("write",df,6c,59,d0),hx::paccDynamic)) );
HXDLIN(  53)				bool _hx_tmp;
HXDLIN(  53)				if ((len >= (int)0)) {
HXLINE(  53)					_hx_tmp = (len > tmp->length);
            				}
            				else {
HXLINE(  53)					_hx_tmp = true;
            				}
HXDLIN(  53)				if (_hx_tmp) {
HXLINE(  53)					HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds_dyn());
            				}
HXDLIN(  53)				::Array< unsigned char > b1 = b->b;
HXDLIN(  53)				::Array< unsigned char > b2 = tmp->b;
HXDLIN(  53)				{
HXLINE(  53)					int _g1 = (int)0;
HXDLIN(  53)					int _g = len;
HXDLIN(  53)					while((_g1 < _g)){
HXLINE(  53)						_g1 = (_g1 + (int)1);
HXDLIN(  53)						int i = (_g1 - (int)1);
HXDLIN(  53)						::Array< unsigned char > b3 = b->b;
HXDLIN(  53)						b3->push(b2->__get(i));
            					}
            				}
            			}
HXLINE(  54)			pos = (pos + ( (int)(r->__Field(HX_("read",56,4b,a7,4b),hx::paccDynamic)) ));
HXLINE(  55)			if (( (bool)(r->__Field(HX_("done",82,f0,6d,42),hx::paccDynamic)) )) {
HXLINE(  56)				goto _hx_goto_4;
            			}
            		}
            		_hx_goto_4:;
HXLINE(  58)		u->close();
HXLINE(  59)		return b->getBytes();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Uncompress_obj,run,return )


hx::ObjectPtr< Uncompress_obj > Uncompress_obj::__new( ::Dynamic windowBits) {
	hx::ObjectPtr< Uncompress_obj > __this = new Uncompress_obj();
	__this->__construct(windowBits);
	return __this;
}

hx::ObjectPtr< Uncompress_obj > Uncompress_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic windowBits) {
	Uncompress_obj *__this = (Uncompress_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Uncompress_obj), true, "haxe.zip.Uncompress"));
	*(void **)__this = Uncompress_obj::_hx_vtable;
	__this->__construct(windowBits);
	return __this;
}

Uncompress_obj::Uncompress_obj()
{
}

void Uncompress_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Uncompress);
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_END_CLASS();
}

void Uncompress_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(s,"s");
}

hx::Val Uncompress_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { return hx::Val( s ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return hx::Val( close_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return hx::Val( execute_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setFlushMode") ) { return hx::Val( setFlushMode_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Uncompress_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { outValue = run_dyn(); return true; }
	}
	return false;
}

hx::Val Uncompress_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Uncompress_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("s","\x73","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Uncompress_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Uncompress_obj,s),HX_HCSTRING("s","\x73","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Uncompress_obj_sStaticStorageInfo = 0;
#endif

static ::String Uncompress_obj_sMemberFields[] = {
	HX_HCSTRING("s","\x73","\x00","\x00","\x00"),
	HX_HCSTRING("execute","\x35","\x0a","\x0d","\xcc"),
	HX_HCSTRING("setFlushMode","\x45","\xd4","\x07","\x63"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	::String(null()) };

static void Uncompress_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Uncompress_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Uncompress_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Uncompress_obj::__mClass,"__mClass");
};

#endif

hx::Class Uncompress_obj::__mClass;

static ::String Uncompress_obj_sStaticFields[] = {
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	::String(null())
};

void Uncompress_obj::__register()
{
	hx::Object *dummy = new Uncompress_obj;
	Uncompress_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.zip.Uncompress","\xd0","\xbe","\x27","\x11");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Uncompress_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Uncompress_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Uncompress_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Uncompress_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Uncompress_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Uncompress_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Uncompress_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Uncompress_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace zip
