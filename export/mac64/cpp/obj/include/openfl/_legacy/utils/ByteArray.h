// Generated by Haxe 3.4.4
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#define INCLUDED_openfl__legacy_utils_ByteArray

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,_legacy,Lib)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_legacy,utils,CompressionAlgorithm)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)

namespace openfl{
namespace _legacy{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES ByteArray_obj : public  ::haxe::io::Bytes_obj
{
	public:
		typedef  ::haxe::io::Bytes_obj super;
		typedef ByteArray_obj OBJ_;
		ByteArray_obj();

	public:
		enum { _hx_ClassId = 0x140d0a90 };

		void __construct(hx::Null< int >  __o_size);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.utils.ByteArray")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._legacy.utils.ByteArray"); }
		static hx::ObjectPtr< ByteArray_obj > __new(hx::Null< int >  __o_size);
		static hx::ObjectPtr< ByteArray_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_size);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ByteArray_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		static void __init__();

		::String __ToString() const { return HX_HCSTRING("ByteArray","\x51","\x21","\x97","\x5d"); }

		static void __boot();
		typedef int __array_access;
		static  ::openfl::_legacy::utils::ByteArray fromBytes( ::haxe::io::Bytes bytes);
		static ::Dynamic fromBytes_dyn();

		static  ::openfl::_legacy::utils::ByteArray readFile(::String path);
		static ::Dynamic readFile_dyn();

		static  ::Dynamic _double_bytes;
		static Dynamic _double_bytes_dyn() { return _double_bytes;}
		static  ::Dynamic _double_of_bytes;
		static Dynamic _double_of_bytes_dyn() { return _double_of_bytes;}
		static  ::Dynamic _float_bytes;
		static Dynamic _float_bytes_dyn() { return _float_bytes;}
		static  ::Dynamic _float_of_bytes;
		static Dynamic _float_of_bytes_dyn() { return _float_of_bytes;}
		static  ::Dynamic lime_byte_array_overwrite_file;
		static Dynamic lime_byte_array_overwrite_file_dyn() { return lime_byte_array_overwrite_file;}
		static  ::Dynamic lime_byte_array_read_file;
		static Dynamic lime_byte_array_read_file_dyn() { return lime_byte_array_read_file;}
		static  ::Dynamic lime_byte_array_get_native_pointer;
		static Dynamic lime_byte_array_get_native_pointer_dyn() { return lime_byte_array_get_native_pointer;}
		static  ::Dynamic lime_lzma_encode;
		static Dynamic lime_lzma_encode_dyn() { return lime_lzma_encode;}
		static  ::Dynamic lime_lzma_decode;
		static Dynamic lime_lzma_decode_dyn() { return lime_lzma_decode;}
		bool bigEndian;
		int bytesAvailable;
		int position;
		int byteLength;
		::String asString();
		::Dynamic asString_dyn();

		void checkData(int length);
		::Dynamic checkData_dyn();

		void clear();
		::Dynamic clear_dyn();

		void compress( ::openfl::_legacy::utils::CompressionAlgorithm algorithm);
		::Dynamic compress_dyn();

		void deflate();
		::Dynamic deflate_dyn();

		void ensureElem(int size,bool updateLength);
		::Dynamic ensureElem_dyn();

		 ::openfl::_legacy::utils::ByteArray getByteBuffer();
		::Dynamic getByteBuffer_dyn();

		int getLength();
		::Dynamic getLength_dyn();

		 ::Dynamic getNativePointer();
		::Dynamic getNativePointer_dyn();

		int getStart();
		::Dynamic getStart_dyn();

		void inflate();
		::Dynamic inflate_dyn();

		bool readBoolean();
		::Dynamic readBoolean_dyn();

		int readByte();
		::Dynamic readByte_dyn();

		void readBytes( ::openfl::_legacy::utils::ByteArray data,hx::Null< int >  offset,hx::Null< int >  length);
		::Dynamic readBytes_dyn();

		Float readDouble();
		::Dynamic readDouble_dyn();

		Float readFloat();
		::Dynamic readFloat_dyn();

		int readInt();
		::Dynamic readInt_dyn();

		::String readMultiByte(int length,::String charSet);
		::Dynamic readMultiByte_dyn();

		void writeMultiByte(::String value,::String charSet);
		::Dynamic writeMultiByte_dyn();

		int readShort();
		::Dynamic readShort_dyn();

		int readUnsignedByte();
		::Dynamic readUnsignedByte_dyn();

		int readUnsignedInt();
		::Dynamic readUnsignedInt_dyn();

		int readUnsignedShort();
		::Dynamic readUnsignedShort_dyn();

		::String readUTF();
		::Dynamic readUTF_dyn();

		::String readUTFBytes(int length);
		::Dynamic readUTFBytes_dyn();

		void setLength(int length);
		::Dynamic setLength_dyn();

		 ::openfl::_legacy::utils::ByteArray slice(int begin, ::Dynamic end);
		::Dynamic slice_dyn();

		void uncompress( ::openfl::_legacy::utils::CompressionAlgorithm algorithm);
		::Dynamic uncompress_dyn();

		void write_uncheck(int byte);
		::Dynamic write_uncheck_dyn();

		void writeBoolean(bool value);
		::Dynamic writeBoolean_dyn();

		void writeObject( ::Dynamic object);
		::Dynamic writeObject_dyn();

		void writeByte(int value);
		::Dynamic writeByte_dyn();

		void writeBytes( ::haxe::io::Bytes bytes,hx::Null< int >  offset,hx::Null< int >  length);
		::Dynamic writeBytes_dyn();

		void writeDouble(Float x);
		::Dynamic writeDouble_dyn();

		void writeFile(::String path);
		::Dynamic writeFile_dyn();

		void writeFloat(Float x);
		::Dynamic writeFloat_dyn();

		void writeInt(int value);
		::Dynamic writeInt_dyn();

		void writeShort(int value);
		::Dynamic writeShort_dyn();

		void writeUnsignedInt(int value);
		::Dynamic writeUnsignedInt_dyn();

		void writeUTF(::String s);
		::Dynamic writeUTF_dyn();

		void writeUTFBytes(::String s);
		::Dynamic writeUTFBytes_dyn();

		void _hx___fromBytes( ::haxe::io::Bytes bytes);
		::Dynamic _hx___fromBytes_dyn();

		virtual int __get(int pos);
		::Dynamic __get_dyn();

		virtual void __set(int pos,int v);
		::Dynamic __set_dyn();

		void _hx___resize(int length);
		::Dynamic _hx___resize_dyn();

		int _hx___throwEOFi();
		::Dynamic _hx___throwEOFi_dyn();

		int get_bytesAvailable();
		::Dynamic get_bytesAvailable_dyn();

		int get_byteLength();
		::Dynamic get_byteLength_dyn();

		::String get_endian();
		::Dynamic get_endian_dyn();

		::String set_endian(::String value);
		::Dynamic set_endian_dyn();

		int get___length();
		::Dynamic get___length_dyn();

		int set___length(int value);
		::Dynamic set___length_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils

#endif /* INCLUDED_openfl__legacy_utils_ByteArray */ 
