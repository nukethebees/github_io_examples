#pragma once

#include "reaper_plugin.h"

extern "C" {
    REAPER_PLUGIN_DLL_EXPORT
    int REAPER_PLUGIN_ENTRYPOINT(HINSTANCE hInstance, reaper_plugin_info_t* rec);
}
