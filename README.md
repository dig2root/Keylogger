# C/C++ Keylogger

_January 29, 2023 by [Clément Rault](https://dig2root.github.io)_

This article is dedicated to a personal project, in which I tried to understand and recreate the behavior of a software 
Keylogger made with C/C++ and running on Windows. In this article you will find all my research and thoughts on the 
subject. To make the article understandable to everyone, I redefine the concepts used.

## What is a keylogger

A keylogger (or keystroke logger) is a tool (hardware or software) which proceed keystroke logging. Keystroke logging
means a way to record / to log all the key pressed by a user on its keyboard device (physical or virtual).
In this article I will speak only about software keyloggers. There is several possible techniques :

1. Kernel-based
2. API-based
3. ...

_To do ..._

## What does hooking mean

_To do ..._

## References

- Keystroke logging : https://en.wikipedia.org/wiki/Keystroke_logging
- DLL Injection : https://en.wikipedia.org/wiki/DLL_injection
- Hooking : https://en.wikipedia.org/wiki/Hooking
- Global injection and Hooking in Windows : https://m417z.com/Implementing-Global-Injection-and-Hooking-in-Windows/
- Global Hook Sample : https://github.com/katahiromz/GlobalHookSample
- SetWindowsHookEx : https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-setwindowshookexw
- LowLevelKeyboardProc : https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-setwindowshookexw