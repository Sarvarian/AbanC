#include <stdio.h>
#include "os/main.h"
#include "os/os.h"
#include "os/window.h"
#include "os/delayed_loop.h"

inline void thread_main();
inline void loop();

Main(thread_main());

inline void thread_main()
{
 DelayedLoop(true, loop(), 1);
}

inline void loop()
{
 aban_os_process();
 printf("%i\n", SDL_GetTicks());
}