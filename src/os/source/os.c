#include "SDL.h"
#include "os/global.h"

extern void aban_os_process_shutdown();
extern int aban_os_process_init();

static int aban_os_exit_code = 0;

int __aban_os_init(int argc, char *argv[])
{
 const int res = SDL_Init(SDL_INIT_EVERYTHING);
 if (res == 0)
 {
  const res = aban_os_process_init();
  if (res == ABAN_INIT_SUCCESS)
  {
   return ABAN_INIT_SUCCESS;
  }
  else
  {
   return ABAN_INIT_FAILED;
  }
 }
 else
 {
  return ABAN_INIT_FAILED;
 }
}

int __aban_os_failed_init(int error_code)
{
 return ABAN_INIT_FAILED;
}

int __aban_os_exit()
{
 aban_os_process_shutdown();
 SDL_Quit();
 return aban_os_exit_code;
}
