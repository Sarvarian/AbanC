#include <Windows.h>
#include "os/global.h"



#ifdef _WIN32

HINSTANCE aban_os_win32_hinstance = NULL;
PWSTR aban_os_win32_cmdline = NULL;
int aban_os_win32_cmdshow = -1;

int __aban_os_init_winmain(HINSTANCE hInstance, PWSTR pCmdLine, int nCmdShow)
{
 aban_os_win32_hinstance = hInstance;
 aban_os_win32_cmdline = pCmdLine;
 aban_os_win32_cmdshow = nCmdShow;

 return ABAN_INIT_SUCCESS;
}

#endif // _WIN32

int __aban_os_init_main(int argc, char *argv[])
{
#ifdef _WIN32
 aban_os_win32_hinstance = GetModuleHandle(NULL);
#endif // _WIN32

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
