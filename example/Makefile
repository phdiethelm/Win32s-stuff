# Make file for Win32s example on Windows using OpenWatcom 2.0
#
# You may need to set include path to include <OW20 path>\H\nt
# if not compiling from win32. for example:
# set include=%watcom%\h;%watcom%\h\nt

CC=wcc386
CFLAGS=-bt=nt -zq
LDFLAGS=op q SYS nt_win  runtime win=3.10

ALL: example.exe

clean: .SYMBOLIC
	del /q example.exe

.c.obj: .AUTODEPEND
	$(CC) $(CFLAGS) $< -fo=$@

example.exe: example.obj
	wlink $(LDFLAGS) F { $< } N $@ 
