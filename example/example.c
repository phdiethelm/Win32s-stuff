#include <windows.h>

// Compile and link with 
//   set include=C:\ow20\h;C:\ow20\h\nt
//   wcl386 -l=nt_win -bt=nt -"runtime win=3.10" example.c
// or
//   set include=C:\ow20\h;C:\ow20\h\nt
//   wmake (and the makefile)

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR lpCmdLine, int nShowCmd)
{
    return MessageBox(NULL, "Hello, World!", "Title", MB_OK | MB_ICONINFORMATION);
}
