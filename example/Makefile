# Make file for Win32s example on Windows using OpenWatcom 2.0

CC=wcc386
CFLAGS=-bm -zq -DWIN32 -D_WIN32_WINNT=0x0351
LDFLAGS=SYS nt_win  runtime win=3.10

ALL: example.exe

clean: .SYMBOLIC
	del /q example.exe

.c.obj: .AUTODEPEND
	$(CC) $(CFLAGS) $< -fo=$@

example.exe: example.obj
	wlink $(LDFLAGS) F { $< } N $@ 
