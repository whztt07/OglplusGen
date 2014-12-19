/**
 *  @file oglplus/graphics_reset_status.hpp
 *  @brief Wrapper for the graphics reset status enumeration
 *
 *  @author Matus Chochlik
 *
 *  Copyright 2010-2014 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#pragma once
#ifndef OGLPLUS_GRAPHICS_RESET_STATUS_1404220911_HPP
#define OGLPLUS_GRAPHICS_RESET_STATUS_1404220911_HPP

#include <oglplus/enumerations.hpp>

namespace oglplus {

/// Graphics reset status enumeration
/**
 *  @ingroup enumerations
 *
 *  @glsymbols
 *  @glverreq{4,5}
 */
OGLPLUS_ENUM_CLASS_BEGIN(GraphicsResetStatus, GLenum)
#include <oglplus/enums/graphics_reset_status.ipp>
OGLPLUS_ENUM_CLASS_END(GraphicsResetStatus)

#if !OGLPLUS_NO_ENUM_VALUE_NAMES
#include <oglplus/enums/graphics_reset_status_names.ipp>
#endif

#if !OGLPLUS_ENUM_VALUE_RANGES
#include <oglplus/enums/graphics_reset_status_range.ipp>
#endif

} // namespace oglplus

#endif // include guard
