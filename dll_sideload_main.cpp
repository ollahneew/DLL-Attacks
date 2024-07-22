#include <windows.h>
#include <stdio.h>
#pragma comment (lib, "user32.lib")

extern __declspec(dllexport) PVOID curl_easy_init() {
	MessageBoxW(NULL, L"DLL Sideloaded", L"Got shell?", MB_ICONEXCLAMATION);
	return NULL;
}

extern __declspec(dllexport) PVOID curl_easy_setotp() {
    printf("No thing to do here");
    return NULL;
}

extern __declspec(dllexport) PVOID curl_easy_perform() {
    printf("No thing to do here");
    return NULL;
}

extern __declspec(dllexport) PVOID curl_easy_cleanup() {
    printf("No thing to do here");
    return NULL;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD nReason, LPVOID lpReserved) {
    switch (nReason) {
    case DLL_PROCESS_ATTACH:
    case DLL_PROCESS_DETACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
        break;
    }
    return TRUE;
}