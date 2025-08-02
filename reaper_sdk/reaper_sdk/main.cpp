#define REAPERAPI_IMPLEMENT
#include "reaper_plugin_functions.h"

#include "main.hpp"

reaper_plugin_info_t* g_rec = nullptr;

extern "C" {
    REAPER_PLUGIN_DLL_EXPORT
    int REAPER_PLUGIN_ENTRYPOINT(HINSTANCE hInstance, reaper_plugin_info_t* rec) {
        if (rec == nullptr) {
            return 0;
        }

        if (REAPERAPI_LoadAPI(rec->GetFunc) > 0) {
            return 0;
        }

        ShowConsoleMsg("Hello world!");

        return 1;
    }
}
