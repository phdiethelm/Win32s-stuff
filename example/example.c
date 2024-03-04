#include <windows.h>

// Compile and link with 
//   wcl386 -l=nt_win -"runtime win=3.10" example.c
// or
//   wmake (and the makefile)

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR lpCmdLine, int nShowCmd)
{
    return MessageBox(NULL, "Hello, World!", "Title", MB_OK | MB_ICONINFORMATION);
}
