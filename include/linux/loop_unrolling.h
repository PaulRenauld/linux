// SPDX-License-Identifier: GPL-2.0

/*
 * Copyright (C) 2020 Google LLC.
 */

#ifndef __LINUX_LOOP_UNROLLING_H
#define __LINUX_LOOP_UNROLLING_H

/*
 * Call MACRO N times. 
 * N must be an integer constant no greater than MAX_UNROLL_MACRO_LOOP
 * MACRO should take as first argument the index and then
 * the same __VA_ARGS__
 * Essenially, this will expand to:
 *	MACRO(0, ...)
 *	MACRO(1, ...)
 *	MACRO(2, ...)
 *	...
 */
#define UNROLL_MACRO_LOOP(N, MACRO, ...)		\
	_UNROLL_MACRO_LOOP(N, MACRO, __VA_ARGS__)

#define MAX_UNROLL_MACRO_LOOP (20)

// Intermediate macros to expand N if it is itself a macro
#define _UNROLL_MACRO_LOOP(N, MACRO, ...)		\
	__UNROLL_MACRO_LOOP(N, MACRO, __VA_ARGS__)

#define __UNROLL_MACRO_LOOP(N, MACRO, ...)		\
	__UNROLL_MACRO_LOOP_##N(MACRO, __VA_ARGS__)


#define __UNROLL_MACRO_LOOP_0(MACRO, ...)

#define __UNROLL_MACRO_LOOP_1(MACRO, ...)		\
	__UNROLL_MACRO_LOOP_0(MACRO, __VA_ARGS__)	\
	MACRO(0, __VA_ARGS__)

#define __UNROLL_MACRO_LOOP_2(MACRO, ...)		\
	__UNROLL_MACRO_LOOP_1(MACRO, __VA_ARGS__)	\
	MACRO(1, __VA_ARGS__)

#define __UNROLL_MACRO_LOOP_3(MACRO, ...)		\
	__UNROLL_MACRO_LOOP_2(MACRO, __VA_ARGS__)	\
	MACRO(2, __VA_ARGS__)

#define __UNROLL_MACRO_LOOP_4(MACRO, ...)		\
	__UNROLL_MACRO_LOOP_3(MACRO, __VA_ARGS__)	\
	MACRO(3, __VA_ARGS__)

#define __UNROLL_MACRO_LOOP_5(MACRO, ...)		\
	__UNROLL_MACRO_LOOP_4(MACRO, __VA_ARGS__)	\
	MACRO(4, __VA_ARGS__)

#define __UNROLL_MACRO_LOOP_6(MACRO, ...)		\
	__UNROLL_MACRO_LOOP_5(MACRO, __VA_ARGS__)	\
	MACRO(5, __VA_ARGS__)

#define __UNROLL_MACRO_LOOP_7(MACRO, ...)		\
	__UNROLL_MACRO_LOOP_6(MACRO, __VA_ARGS__)	\
	MACRO(6, __VA_ARGS__)

#define __UNROLL_MACRO_LOOP_8(MACRO, ...)		\
	__UNROLL_MACRO_LOOP_7(MACRO, __VA_ARGS__)	\
	MACRO(7, __VA_ARGS__)

#define __UNROLL_MACRO_LOOP_9(MACRO, ...)		\
	__UNROLL_MACRO_LOOP_8(MACRO, __VA_ARGS__)	\
	MACRO(8, __VA_ARGS__)

#define __UNROLL_MACRO_LOOP_10(MACRO, ...)		\
	__UNROLL_MACRO_LOOP_9(MACRO, __VA_ARGS__)	\
	MACRO(9, __VA_ARGS__)

#define __UNROLL_MACRO_LOOP_11(MACRO, ...)		\
	__UNROLL_MACRO_LOOP_10(MACRO, __VA_ARGS__)	\
	MACRO(10, __VA_ARGS__)

#define __UNROLL_MACRO_LOOP_12(MACRO, ...)		\
	__UNROLL_MACRO_LOOP_11(MACRO, __VA_ARGS__)	\
	MACRO(11, __VA_ARGS__)

#define __UNROLL_MACRO_LOOP_13(MACRO, ...)		\
	__UNROLL_MACRO_LOOP_12(MACRO, __VA_ARGS__)	\
	MACRO(12, __VA_ARGS__)

#define __UNROLL_MACRO_LOOP_14(MACRO, ...)		\
	__UNROLL_MACRO_LOOP_13(MACRO, __VA_ARGS__)	\
	MACRO(13, __VA_ARGS__)

#define __UNROLL_MACRO_LOOP_15(MACRO, ...)		\
	__UNROLL_MACRO_LOOP_14(MACRO, __VA_ARGS__)	\
	MACRO(14, __VA_ARGS__)

#define __UNROLL_MACRO_LOOP_16(MACRO, ...)		\
	__UNROLL_MACRO_LOOP_15(MACRO, __VA_ARGS__)	\
	MACRO(15, __VA_ARGS__)

#define __UNROLL_MACRO_LOOP_17(MACRO, ...)		\
	__UNROLL_MACRO_LOOP_16(MACRO, __VA_ARGS__)	\
	MACRO(16, __VA_ARGS__)

#define __UNROLL_MACRO_LOOP_18(MACRO, ...)		\
	__UNROLL_MACRO_LOOP_17(MACRO, __VA_ARGS__)	\
	MACRO(17, __VA_ARGS__)

#define __UNROLL_MACRO_LOOP_19(MACRO, ...)		\
	__UNROLL_MACRO_LOOP_18(MACRO, __VA_ARGS__)	\
	MACRO(18, __VA_ARGS__)

#define __UNROLL_MACRO_LOOP_20(MACRO, ...)		\
	__UNROLL_MACRO_LOOP_19(MACRO, __VA_ARGS__)	\
	MACRO(19, __VA_ARGS__)

#endif /* __LINUX_LOOP_UNROLLING_H */