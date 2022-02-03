#pragma once

#include "global.h"
#include "SDL.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

 int __aban_os_init(int argc, char *argv[]);
 int __aban_os_failed_init(int error_code);
 int __aban_os_exit();

#ifdef __cplusplus
}
#endif // __cplusplus

#define Main(proc)                                 \
 int main(int argc, char *argv[])                  \
 {                                                 \
  const int init_res = __aban_os_init(argc, argv); \
  if (init_res != ABAN_INIT_SUCCESS)               \
  {                                                \
   return __aban_os_failed_init(init_res);         \
  }                                                \
  else                                             \
  {                                                \
   proc();                                         \
   __aban_os_exit();                               \
   return 0;                                       \
  }                                                \
 }
