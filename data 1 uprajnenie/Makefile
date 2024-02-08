all: safeadd.exe safesubtract.exe safemultiply.exe safedivide.exe

safeint.o: safeint.c safeint.h
	gcc -c safeint.c -o safeint.o

safeadd.exe: safeint.o safeadd.c
	gcc safeadd.c safeint.o -o safeadd.exe

safesubtract.exe: safeint.o safesubtract.c
	gcc safesubtract.c safeint.o -o safesubtract.exe

safemultiply.exe: safeint.o safemultiply.c
	gcc safemultiply.c safeint.o -o safemultiply.exe

safedivide.exe: safeint.o safedivide.c
	gcc safedivide.c safeint.o -o safedivide.exe


clean:
	del *.exe *.o