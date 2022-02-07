#include <Windows.h>
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
 printf("%i\n", SDL_GetCPUCount());
 printf("%i\n", SDL_GetCPUCacheLineSize());
 printf("%i\n", SDL_GetSystemRAM());

 SYSTEM_INFO sysinfo;
 GetSystemInfo(&sysinfo);
 DWORD page_size = sysinfo.dwPageSize;
 printf("%i\n", page_size);

 DelayedLoop(true, loop(), 1);
}

inline void loop()
{
 aban_os_process();
 // printf("%i\n", SDL_GetTicks());
}