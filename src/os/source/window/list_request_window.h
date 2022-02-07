#pragma once

#include "os/global.h"
#include "os/window.h"
#include "os/tools/iter.h"

#define ABAN_OS_REQUEST_WINDOW_BUFFER_LENGTH 2
typedef u8 AbanOSTypeLengthListRequestWindow;

extern AbanOSRequestWindow aban_os_list_request_window[ABAN_OS_REQUEST_WINDOW_BUFFER_LENGTH];

inline void aban_os_iter_list_request_window(enum AbanResultIterProc (*proc)(AbanOSRequestWindow *p_request_window))
{
    for (AbanOSTypeLengthListRequestWindow i = 0; i < ABAN_OS_REQUEST_WINDOW_BUFFER_LENGTH; i++)
    {
        AbanOSRequestWindow *p_request_window = &aban_os_list_request_window[i];
        enum AbanResultIterProc res = proc(p_request_window);
        if (res == E_BREAK)
        {
            break;
        }
    }
}
