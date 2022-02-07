#pragma once
#include "os/global.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

 typedef struct AbanOSRequestWindowResult
 {
  bool is_succeed;
 } AbanOSRequestWindowResult;

 typedef struct AbanOSRequestWindow
 {
  int x;
  int y;
  int w;
  int h;
  char *title;
  void (*callback)(AbanOSRequestWindowResult *);
 } AbanOSRequestWindow;

 bool aban_os_request_new_window(AbanOSRequestWindow request);

#ifdef __cplusplus
}
#endif // __cplusplus