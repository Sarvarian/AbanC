#pragma once
#include "os/global.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

 typedef struct AbanOSLoopDelay
 {
  u32 ticks;
  u32 frequency;
 } AbanOSLoopDelay;

 AbanOSLoopDelay aban_os_loop_delay_create(u32 run_per_second);

 void aban_os_loop_delay_delay(AbanOSLoopDelay *loop_delay);

#ifdef __cplusplus
}
#endif // __cplusplus

#define DelayedLoop(cond, proc, run_per_sec)                          \
 AbanOSLoopDelay loop_delay = aban_os_loop_delay_create(run_per_sec); \
 while (cond)                                                         \
 {                                                                    \
  proc;                                                               \
  aban_os_loop_delay_delay(&loop_delay);                              \
 }
