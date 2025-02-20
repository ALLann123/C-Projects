#include <windows.h>
#pragma comment(lib, "user32.lib")

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved) {
    switch (fdwReason) {
        case DLL_PROCESS_ATTACH:
            MessageBox(NULL, "Hello From Mr.Robot", "F Society", MB_ICONERROR | MB_OK);
            break;
    }
    return TRUE;
}

