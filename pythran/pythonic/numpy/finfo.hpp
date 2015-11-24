#ifndef PYTHONIC_NUMPY_FINFO_HPP
#define PYTHONIC_NUMPY_FINFO_HPP

#include "pythonic/include/numpy/finfo.hpp"

#include "pythonic/utils/proxy.hpp"
#include "pythonic/types/finfo.hpp"

namespace pythonic
{

  namespace numpy
  {
    template <class dtype>
    types::finfo<typename dtype::type> finfo(dtype d)
    {
      return types::finfo<typename dtype::type>();
    }

    PROXY_IMPL(pythonic::numpy, finfo)
  }
}

#endif
