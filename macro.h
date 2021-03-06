/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Copyright(c) 2021 Sanpe <sanpeqf@gmail.com>
 */

#ifndef _MACRO_H_
#define _MACRO_H_

#include <stdint.h>
#include <stddef.h>
#include <errno.h>

/**
 * min - return minimum of two values of the same or compatible types
 * @a: first value
 * @b: second value
 */
#define min(a, b) ({                \
    typeof(a) _amin = (a);          \
    typeof(a) _bmin = (b);          \
    (void)(&_amin == &_bmin);       \
    _amin < _bmin ? _amin : _bmin;  \
})

/*
 *   gcc: https://gcc.gnu.org/onlinedocs/gcc/Common-Type-Attributes.html#index-packed-type-attribute
 * clang: https://gcc.gnu.org/onlinedocs/gcc/Common-Variable-Attributes.html#index-packed-variable-attribute
 */
#define __packed __attribute__((__packed__))

/*
 *   gcc: https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html#index-noreturn-function-attribute
 * clang: https://clang.llvm.org/docs/AttributeReference.html#noreturn
 * clang: https://clang.llvm.org/docs/AttributeReference.html#id1
 */
#define __noreturn __attribute__((__noreturn__))

#endif  /* _MACRO_H_ */
