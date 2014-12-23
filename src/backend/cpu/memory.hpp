/*******************************************************
 * Copyright (c) 2014, ArrayFire
 * All rights reserved.
 *
 * This file is distributed under 3-clause BSD license.
 * The complete license agreement can be obtained at:
 * http://arrayfire.com/licenses/BSD-3-Clause
 ********************************************************/

#include <af/defines.h>
namespace cpu
{
    template<typename T> T* memAlloc(const size_t &elements);
    template<typename T> void memFree(T* ptr);

    template<typename T> T* pinnedAlloc(const size_t &elements);
    template<typename T> void pinnedFree(T* ptr);
}
