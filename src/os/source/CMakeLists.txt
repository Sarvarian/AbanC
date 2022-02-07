target_sources(OS
PRIVATE
"os.c"
"os_init.c"
"os_shutdown.c"
"os_process.c"
"delayed_loop.c"
)

add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/window")
