#include "os/main.h"

inline void thread_main();

Main(thread_main);

#include <stdio.h>

inline void thread_main()
{
 printf("Hello, World!");
}
