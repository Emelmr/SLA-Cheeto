#pragma once

#include <Windows.h>
#include <filesystem>
#include <optional>
#include <string>

namespace util
{
    void ObfuscateTiming();
    void DisableAntiDebug();
    void BypassMemoryScans();
}
