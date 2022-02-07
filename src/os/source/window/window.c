#include "SDL_mutex.h"
#include "SDL_video.h"

#include "os/global.h"
#include "os/window.h"

#include "list_request_window.h"

#define ABAN_OS_WINDOW_LIMIT 16

static SDL_mutex *aban_os_request_window_mutex = null;

bool aban_os_request_new_window(AbanOSRequestWindow request)
{
 SDL_LockMutex(aban_os_request_window_mutex);

 SDL_UnlockMutex(aban_os_request_window_mutex);

 return false;
}

int aban_os_window_init()
{
 // TODO: Error handling.
 aban_os_request_window_mutex = SDL_CreateMutex();

 if (aban_os_request_window_mutex == null)
 {
  return ABAN_INIT_FAILED;
 }
 else
 {
  return ABAN_INIT_SUCCESS;
 }
}

void aban_os_window_process()
{
}

void aban_os_window_shutdown()
{
}