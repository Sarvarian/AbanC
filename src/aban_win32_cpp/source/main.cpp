#include "os/main.h"
#include "os/os.h"
#include "os/window.h"
#include "os/delayed_loop.h"

inline void thread_main();

Main(DelayedLoop(true, thread_main(), 30));

inline void thread_main()
{
 aban_os_process();
}
