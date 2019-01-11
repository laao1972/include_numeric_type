/*
Copyright 2019 Luiz Antonio Alves de Oliveira All rights reserved.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files(the "Software"), to
deal in the Software without restriction, including without limitation the
rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
sell copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions :

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
IN THE SOFTWARE.
*/
/* Define numeric data type to C programming langague */
#ifndef __NUMERIC_TYPE_H
#define __NUMERIC_TYPE_H

#include <limits.h>

#if CHAR_BIT == 8
#define INT8_DEFINED
typedef char int8;
typedef signed char int8s;
#else
#error "Impossible to define the type int8"
#endif 
#if USHRT_MAX == 65535 && !defined(INT16_DEFINED)
#define INT16_DEFINED
typedef unsigned short int16;
typedef signed   short int16s;
#elif USHRT_MAX == 4294967295 && !defined(INT32_DEFINED)
#define INT32_DEFINED
typedef unsigned short int32;
typedef signed   short int32s;
#elif USHRT_MAX == 18446744073709551615 && !defined(INT64_DEFINED)
#define INT64_DEFINED
typedef unsigned short int64;
typedef signed   short int64s;
#endif

#if UINT_MAX == 65535 && !defined(INT16_DEFINED)
#define INT16_DEFINED
typedef unsigned int int16;
typedef signed   int int16s;
#elif UINT_MAX == 4294967295 && !defined(INT32_DEFINED)
#define INT32_DEFINED
typedef unsigned int int32;
typedef signed   int int32s;
#elif UINT_MAX == 18446744073709551615 && !defined(INT64_DEFINED)
#define INT64_DEFINED
typedef unsigned int int64;
typedef signed   int int64s;
#endif

#if ULONG_MAX == 65535 && !defined(INT16_DEFINED)
#define INT16_DEFINED
typedef unsigned long int16;
typedef signed   long int16s;
#elif ULONG_MAX == 4294967295 && !defined(INT32_DEFINED)
#define INT32_DEFINED
typedef unsigned long int32;
typedef signed   long int32s;
#elif ULONG_MAX == 18446744073709551615 && !defined(INT64_DEFINED)
#define INT64_DEFINED
typedef unsigned long int64;
typedef signed   long int64s;
#endif

#if ULLONG_MAX == 65535 && !defined(INT16_DEFINED)
#define INT16_DEFINED
typedef unsigned long long int16;
typedef signed   long long int16s;
#elif ULLONG_MAX == 4294967295 && !defined(INT32_DEFINED)
#define INT32_DEFINED
typedef unsigned long long int32;
typedef signed   long long int32s;
#elif ULLONG_MAX == 18446744073709551615 && !defined(INT64_DEFINED)
#define INT64_DEFINED
typedef unsigned long long int64;
typedef signed   long long int64s;
#endif




#endif 
