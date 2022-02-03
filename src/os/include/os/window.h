#pragma once
#include "os/global.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

 struct AbanOSWindowRequestResult
 {
  char is_succeed;
 };

 struct AbanOSWindowRequest
 {
  int x;
  int y;
  int w;
  int h;
  char *title;
  void (*callback)();
 };

 // void Request

#ifdef __cplusplus
}
#endif // __cplusplus