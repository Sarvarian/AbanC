#pragma once
#include "os/global.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

 struct AbanOSWindowRequestResult
 {
  bool is_succeed;
 };

 typedef struct AbanOSWindowRequest
 {
  int x;
  int y;
  int w;
  int h;
  char *title;
  void (*callback)();
 } AbanOSWindowRequest;

 // void Request

#ifdef __cplusplus
}
#endif // __cplusplus