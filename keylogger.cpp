#include <windows.h>
#include <cstdio>

LRESULT CALLBACK LowLevelKeyboardProc(int nCode, WPARAM wParam, LPARAM lParam)
{
    BOOL fEatKeystroke = FALSE;

    if (nCode == HC_ACTION)
    {
        switch (wParam)
        {
            case WM_KEYDOWN:
            case WM_SYSKEYDOWN:
            case WM_KEYUP:
            case WM_SYSKEYUP:
                PKBDLLHOOKSTRUCT p = (PKBDLLHOOKSTRUCT)lParam;
                if (fEatKeystroke = (p->vkCode == 0x41))  //redirect a to b
                {
                    printf("Hello a\n");

                    if ( (wParam == WM_KEYDOWN) || (wParam == WM_SYSKEYDOWN) ) // Keydown
                    {
                        keybd_event('B', 0, 0, 0);
                    }
                    else if ( (wParam == WM_KEYUP) || (wParam == WM_SYSKEYUP) ) // Keyup
                    {
                        keybd_event('B', 0, KEYEVENTF_KEYUP, 0);
                    }
                    break;
                }
                break;
        }
    }
    return(fEatKeystroke ? 1 : CallNextHookEx(NULL, nCode, wParam, lParam));
}

int main()
{

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