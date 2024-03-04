# My collection of random Win32s information


## Links
### Microsoft KB articles
- [KB131896: INFO: General limitations under Win32s (131896)](https://ftp.zx.net.nz/pub/archive/ftp.microsoft.com/MISC/KB/en-us/131/896.HTM)
- [KB121093: Points to Remember When Writing a Debugger for Win32s (121093)](https://ftp.zx.net.nz/pub/Patches/ftp.microsoft.com/MISC/KB/en-us/121/093.HTM)
- [Q138234: Win32s 1.30a Bug List at the Time of Its Release](http://web.mit.edu/cascon/microsoft/q138234.htm)

### Useful information
- [Bearwindows: Microsoft Windows 3.1x/WfW + Win32s](https://bearwindows.zcm.com.au/win31x.htm)

WIN32s try to emulate the Windows NT 3.1 API.
A lot of NT 3.1 related information applies to Win32s too:
- [Retro-Porting to NT 3.1](https://www.os2museum.com/wp/retro-porting-to-nt-3-1/)
- [The Strange Case of GetEnvironmentStringsA](https://www.os2museum.com/wp/the-strange-case-of-getenvironmentstringsa/)


## Compiler
There are several compilers available which can be used to produce win32s compatible executables.

I recommend using [Open Watcom](https://github.com/open-watcom) which can be used on any Win32 runtime or directly on the target Windows 3.1 PC. It must be a version that has the GetEnvironmentStrings fix in it
[Pull request](https://github.com/open-watcom/open-watcom-v2/pull/115).

I successfully used the following version for producing Win32s applications:
- [2024-02-02 OW 2.0 C WIN x86](https://github.com/open-watcom/open-watcom-v2/releases/download/2024-02-02-Build/open-watcom-2_0-c-win-x86.exe)
- [2024-02-02 OW 2.0 C DOS](https://github.com/open-watcom/open-watcom-v2/releases/download/2024-02-02-Build/open-watcom-2_0-c-dos.exe)

I don't know which earlier Watcom versions will work but the following version are tested and do not work without patching the startup code:
- OpenWatcom 1.9
