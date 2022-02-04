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

#define i8 Sint8
#define i16 Sint16
#define i32 Sint32
#define i64 Sint64
#define u8 Uint8
#define u16 Uint16
#define u32 Uint32
#define u64 Uint64
#define f32 float
#define f64 double

#define ABAN_INIT_SUCCESS 0
#define ABAN_INIT_FAILED 1
