#include "SDL_timer.h"
#include "os/delayed_loop.h"

#define MILISECONDS_IN_SECOND 1000

LoopDelay aban_os_loop_delay_create(u32 run_per_second)
{
 const u32 frequency = MILISECONDS_IN_SECOND / run_per_second;
 // const LoopDelay loop_delay = {SDL_GetTicks(), frequency};
 LoopDelay loop_delay;
 loop_delay.frequency = frequency;
 loop_delay.ticks = SDL_GetTicks();
 return loop_delay;
}

void aban_os_loop_delay_delay(LoopDelay *loop_delay)
{
 const u32 now = SDL_GetTicks();
 const u32 diff = now - loop_delay->ticks;

 if (diff < loop_delay->frequency)
 {
  SDL_Delay(loop_delay->frequency - diff);
  loop_delay->ticks = SDL_GetTicks();
 }
}
