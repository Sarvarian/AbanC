#pragma once
#include "os/global.h"

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

void Request
