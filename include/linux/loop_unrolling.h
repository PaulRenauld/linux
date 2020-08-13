// SPDX-License-Identifier: GPL-2.0

/*
 * Copyright (C) 2020 Google LLC.
 */

#ifndef __LINUX_LOOP_UNROLLING_H
#define __LINUX_LOOP_UNROLLING_H

/*
 * Call MACRO N times. 
 * N must be an integer constant no greater than M_MAX_LOOP_UNROLLING
 * MACRO should take as first argument the index and then
 * the same __VA_ARGS__
 * Essenially, this will expand to:
 *	MACRO(0, ...)
 *	MACRO(1, ...)
 *	MACRO(2, ...)
 *	...
 */
#define M_LOOP_UNROLLING(N, MACRO, ...)			\
	_M_LOOP_UNROLLING(N, MACRO, __VA_ARGS__)

#define M_MAX_LOOP_UNROLLING (20)

// Intermediate macros to expand N if it is itself a macro
#define _M_LOOP_UNROLLING(N, MACRO, ...)		\
	__M_LOOP_UNROLLING(N, MACRO, __VA_ARGS__)

#define __M_LOOP_UNROLLING(N, MACRO, ...)		\
	__M_LOOP_UNROLLING_##N(MACRO, __VA_ARGS__)


#define __M_LOOP_UNROLLING_0(MACRO, ...)

#define __M_LOOP_UNROLLING_1(MACRO, ...)		\
	__M_LOOP_UNROLLING_0(MACRO, __VA_ARGS__)	\
	MACRO(0, __VA_ARGS__)

#define __M_LOOP_UNROLLING_2(MACRO, ...)		\
	__M_LOOP_UNROLLING_1(MACRO, __VA_ARGS__)	\
	MACRO(1, __VA_ARGS__)

#define __M_LOOP_UNROLLING_3(MACRO, ...)		\
	__M_LOOP_UNROLLING_2(MACRO, __VA_ARGS__)	\
	MACRO(2, __VA_ARGS__)

#define __M_LOOP_UNROLLING_4(MACRO, ...)		\
	__M_LOOP_UNROLLING_3(MACRO, __VA_ARGS__)	\
	MACRO(3, __VA_ARGS__)

#define __M_LOOP_UNROLLING_5(MACRO, ...)		\
	__M_LOOP_UNROLLING_4(MACRO, __VA_ARGS__)	\
	MACRO(4, __VA_ARGS__)

#define __M_LOOP_UNROLLING_6(MACRO, ...)		\
	__M_LOOP_UNROLLING_5(MACRO, __VA_ARGS__)	\
	MACRO(5, __VA_ARGS__)

#define __M_LOOP_UNROLLING_7(MACRO, ...)		\
	__M_LOOP_UNROLLING_6(MACRO, __VA_ARGS__)	\
	MACRO(6, __VA_ARGS__)

#define __M_LOOP_UNROLLING_8(MACRO, ...)		\
	__M_LOOP_UNROLLING_7(MACRO, __VA_ARGS__)	\
	MACRO(7, __VA_ARGS__)

#define __M_LOOP_UNROLLING_9(MACRO, ...)		\
	__M_LOOP_UNROLLING_8(MACRO, __VA_ARGS__)	\
	MACRO(8, __VA_ARGS__)

#define __M_LOOP_UNROLLING_10(MACRO, ...)		\
	__M_LOOP_UNROLLING_9(MACRO, __VA_ARGS__)	\
	MACRO(9, __VA_ARGS__)

#define __M_LOOP_UNROLLING_11(MACRO, ...)		\
	__M_LOOP_UNROLLING_10(MACRO, __VA_ARGS__)	\
	MACRO(10, __VA_ARGS__)

#define __M_LOOP_UNROLLING_12(MACRO, ...)		\
	__M_LOOP_UNROLLING_11(MACRO, __VA_ARGS__)	\
	MACRO(11, __VA_ARGS__)

#define __M_LOOP_UNROLLING_13(MACRO, ...)		\
	__M_LOOP_UNROLLING_12(MACRO, __VA_ARGS__)	\
	MACRO(12, __VA_ARGS__)

#define __M_LOOP_UNROLLING_14(MACRO, ...)		\
	__M_LOOP_UNROLLING_13(MACRO, __VA_ARGS__)	\
	MACRO(13, __VA_ARGS__)

#define __M_LOOP_UNROLLING_15(MACRO, ...)		\
	__M_LOOP_UNROLLING_14(MACRO, __VA_ARGS__)	\
	MACRO(14, __VA_ARGS__)

#define __M_LOOP_UNROLLING_16(MACRO, ...)		\
	__M_LOOP_UNROLLING_15(MACRO, __VA_ARGS__)	\
	MACRO(15, __VA_ARGS__)

#define __M_LOOP_UNROLLING_17(MACRO, ...)		\
	__M_LOOP_UNROLLING_16(MACRO, __VA_ARGS__)	\
	MACRO(16, __VA_ARGS__)

#define __M_LOOP_UNROLLING_18(MACRO, ...)		\
	__M_LOOP_UNROLLING_17(MACRO, __VA_ARGS__)	\
	MACRO(17, __VA_ARGS__)

#define __M_LOOP_UNROLLING_19(MACRO, ...)		\
	__M_LOOP_UNROLLING_18(MACRO, __VA_ARGS__)	\
	MACRO(18, __VA_ARGS__)

#define __M_LOOP_UNROLLING_20(MACRO, ...)		\
	__M_LOOP_UNROLLING_19(MACRO, __VA_ARGS__)	\
	MACRO(19, __VA_ARGS__)

#endif /* __LINUX_LOOP_UNROLLING_H */