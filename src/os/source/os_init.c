#include "os/global.h"

extern void aban_os_window_init();

int aban_os_process_init()
{
 aban_os_window_init();

 return ABAN_INIT_SUCCESS;
}