#ifndef PYTHONIC_NUMPY_ARCTAN_HPP
#define PYTHONIC_NUMPY_ARCTAN_HPP

#include "pythonic/include/numpy/arctan.hpp"

#include "pythonic/utils/functor.hpp"
#include "pythonic/types/ndarray.hpp"
#include "pythonic/utils/numpy_traits.hpp"

#include <xsimd/xsimd.hpp>

PYTHONIC_NS_BEGIN

namespace numpy
{
#define NUMPY_NARY_FUNC_NAME arctan
#define NUMPY_NARY_FUNC_SYM wrapper::atan
#include "pythonic/types/numpy_nary_expr.hpp"
}
PYTHONIC_NS_END

#endif
