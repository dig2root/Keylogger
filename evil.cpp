#include <windows.h>
#pragma comment (lib, "user32.dll")

BOOL APIENTRY DllMain(HMODULE hModule, DWORD nReason, LPVOID lpReserved)
{
    switch (nReason) {
        case DLL_PROCESS_ATTACH:
            break;
        case DLL_PROCESS_DETACH:
            break;
        case DLL_THREAD_ATTACH:
            break;
        case DLL_THREAD_DETACH:
            break;
    }
    return TRUE;
}

// __declspec(ddlexport) allows to export function next declared
extern "C" __declspec(dllexport) int Evil()
{
    // Define here the desired behavior of the keylogger
    MessageBox(
    NULL,
    "Keyboard hook triggered",
    "Keylogger",
    MB_OK
    ); // Visual behavior to demonstrate
    return 0;
}