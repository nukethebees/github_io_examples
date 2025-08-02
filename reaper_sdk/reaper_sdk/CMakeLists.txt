add_library(reaper_sdk SHARED
    "main.cpp"
    "main.hpp"
    "reaper_plugin.h"
    "reaper_plugin_functions.h"
)

target_compile_definitions(reaper_sdk PRIVATE
                           REAPERAPI_MINIMAL
                           REAPERAPI_WANT_ShowConsoleMsg
)
