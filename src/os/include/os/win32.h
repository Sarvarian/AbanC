#pragma once
#include <Windows.h>

extern HINSTANCE aban_os_win32_hinstance;
extern PWSTR aban_os_win32_cmdline;
extern int aban_os_win32_cmdshow;

// if "NULL" means it's uninitialize.
inline HINSTANCE get_hinstance() { return aban_os_win32_hinstance; }

// if "NULL" means it's uninitialize.
inline PWSTR get_cmdline() { return aban_os_win32_cmdline; }

// if "-1" means it's uninitialize.
inline int get_cmdshow() { return aban_os_win32_cmdshow; }
