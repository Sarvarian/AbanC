#pragma once

#include <Windows.h>
#include "global.h"

int __aban_os_init_winmain(HINSTANCE hInstance, PWSTR pCmdLine, int nCmdShow);
int __aban_os_init_main(int argc, char *argv[]);
int __aban_os_failed_init(int error_code);
int __aban_os_exit();

#define __MainBody(proc, init, ...)         \
  const int init_res = init(##__VA_ARGS__); \
  if (init_res != ABAN_INIT_SUCCESS)        \
  {                                         \
    return __aban_os_failed_init(init_res); \
  }                                         \
  else                                      \
  {                                         \
    proc();                                 \
    __aban_os_exit();                       \
    return 0;                               \
  }

#ifdef _WIN32
#define Main(proc)                                                                                \
  int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow) \
  {                                                                                               \
    __MainBody(proc, __aban_os_init_winmain, hInstance, pCmdLine, nCmdShow)                       \
  }                                                                                               \
                                                                                                  \
  int main(int argc, char *argv[])                                                                \
  {                                                                                               \
    __MainBody(proc, __aban_os_init_main, argc, argv)                                             \
  }

#else
#define Main(proc)                                    \
  int main(int argc, char *argv[])                    \
  {                                                   \
    __MainBody(proc, __aban_os_init_main, argc, argv) \
  }

#endif // _WIN32
