#include <Windows.h>
#include "os/global.h"

int __aban_os_init_winmain(HINSTANCE hInstance, PWSTR pCmdLine, int nCmdShow)
{
 return ABAN_INIT_SUCCESS;
}

int __aban_os_init_main(int argc, char *argv[])
{
 return ABAN_INIT_SUCCESS;
}

int __aban_os_failed_init(int error_code)
{
 return ABAN_INIT_FAILED;
}

int __aban_os_exit()
{
 return ABAN_INIT_SUCCESS;
}
