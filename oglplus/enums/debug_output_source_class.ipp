//  File implement/oglplus/enums/debug_output_source_class.ipp
//
//  Automatically generated file, DO NOT modify manually.
//  Edit the source 'source/enums/oglplus/debug_output_source.txt'
//  or the 'source/enums/make_enum.py' script instead.
//
//  Copyright 2010-2014 Matus Chochlik.
//  Distributed under the Boost Software License, Version 1.0.
//  See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt
//
namespace enums {
template <typename Base, template<DebugOutputSource> class Transform>
class EnumToClass<Base, DebugOutputSource, Transform>
 : public Base
{
private:
	Base& _base(void) { return *this; }
public:

#if defined GL_DEBUG_SOURCE_API
# if defined API
#  pragma push_macro("API")
#  undef API
	Transform<DebugOutputSource::API> API;
#  pragma pop_macro("API")
# else
	Transform<DebugOutputSource::API> API;
# endif
#endif
#if defined GL_DEBUG_SOURCE_WINDOW_SYSTEM
# if defined WindowSystem
#  pragma push_macro("WindowSystem")
#  undef WindowSystem
	Transform<DebugOutputSource::WindowSystem> WindowSystem;
#  pragma pop_macro("WindowSystem")
# else
	Transform<DebugOutputSource::WindowSystem> WindowSystem;
# endif
#endif
#if defined GL_DEBUG_SOURCE_SHADER_COMPILER
# if defined ShaderCompiler
#  pragma push_macro("ShaderCompiler")
#  undef ShaderCompiler
	Transform<DebugOutputSource::ShaderCompiler> ShaderCompiler;
#  pragma pop_macro("ShaderCompiler")
# else
	Transform<DebugOutputSource::ShaderCompiler> ShaderCompiler;
# endif
#endif
#if defined GL_DEBUG_SOURCE_THIRD_PARTY
# if defined ThirdParty
#  pragma push_macro("ThirdParty")
#  undef ThirdParty
	Transform<DebugOutputSource::ThirdParty> ThirdParty;
#  pragma pop_macro("ThirdParty")
# else
	Transform<DebugOutputSource::ThirdParty> ThirdParty;
# endif
#endif
#if defined GL_DEBUG_SOURCE_APPLICATION
# if defined Application
#  pragma push_macro("Application")
#  undef Application
	Transform<DebugOutputSource::Application> Application;
#  pragma pop_macro("Application")
# else
	Transform<DebugOutputSource::Application> Application;
# endif
#endif
#if defined GL_DEBUG_SOURCE_OTHER
# if defined Other
#  pragma push_macro("Other")
#  undef Other
	Transform<DebugOutputSource::Other> Other;
#  pragma pop_macro("Other")
# else
	Transform<DebugOutputSource::Other> Other;
# endif
#endif
#if defined GL_DONT_CARE
# if defined DontCare
#  pragma push_macro("DontCare")
#  undef DontCare
	Transform<DebugOutputSource::DontCare> DontCare;
#  pragma pop_macro("DontCare")
# else
	Transform<DebugOutputSource::DontCare> DontCare;
# endif
#endif

	EnumToClass(void) { }
	EnumToClass(Base&& base)
	 : Base(std::move(base))
#if defined GL_DEBUG_SOURCE_API
# if defined API
#  pragma push_macro("API")
#  undef API
	 , API(_base())
#  pragma pop_macro("API")
# else
	 , API(_base())
# endif
#endif
#if defined GL_DEBUG_SOURCE_WINDOW_SYSTEM
# if defined WindowSystem
#  pragma push_macro("WindowSystem")
#  undef WindowSystem
	 , WindowSystem(_base())
#  pragma pop_macro("WindowSystem")
# else
	 , WindowSystem(_base())
# endif
#endif
#if defined GL_DEBUG_SOURCE_SHADER_COMPILER
# if defined ShaderCompiler
#  pragma push_macro("ShaderCompiler")
#  undef ShaderCompiler
	 , ShaderCompiler(_base())
#  pragma pop_macro("ShaderCompiler")
# else
	 , ShaderCompiler(_base())
# endif
#endif
#if defined GL_DEBUG_SOURCE_THIRD_PARTY
# if defined ThirdParty
#  pragma push_macro("ThirdParty")
#  undef ThirdParty
	 , ThirdParty(_base())
#  pragma pop_macro("ThirdParty")
# else
	 , ThirdParty(_base())
# endif
#endif
#if defined GL_DEBUG_SOURCE_APPLICATION
# if defined Application
#  pragma push_macro("Application")
#  undef Application
	 , Application(_base())
#  pragma pop_macro("Application")
# else
	 , Application(_base())
# endif
#endif
#if defined GL_DEBUG_SOURCE_OTHER
# if defined Other
#  pragma push_macro("Other")
#  undef Other
	 , Other(_base())
#  pragma pop_macro("Other")
# else
	 , Other(_base())
# endif
#endif
#if defined GL_DONT_CARE
# if defined DontCare
#  pragma push_macro("DontCare")
#  undef DontCare
	 , DontCare(_base())
#  pragma pop_macro("DontCare")
# else
	 , DontCare(_base())
# endif
#endif
	{ }
};

} // namespace enums

