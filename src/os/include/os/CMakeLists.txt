target_sources(OS
PRIVATE
"global.h"
"main.h"
"os.h"
"window.h"
"delayed_loop.h"
)

add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/tools")
