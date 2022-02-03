#pragma once

#include "SDL_stdinc.h"

#ifndef __cplusplus
#define bool SDL_bool
#define true SDL_TRUE
#define false SDL_FALSE
#endif // !__cplusplus

#ifdef __cplusplus
#define null nullptr
#else
#define null NULL
#endif // __cplusplus

#define i8 int8_t
#define i16 int16_t
#define i32 int32_t
#define i64 int64_t
#define u8 uint8_t
#define u16 uint16_t
#define u32 uint32_t
#define u64 uint64_t
#define f32 float
#define f64 double

#define ABAN_INIT_SUCCESS 0
#define ABAN_INIT_FAILED 1
