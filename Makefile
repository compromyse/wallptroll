main:
	x86_64-w64-mingw32-gcc main.c -o main.exe
	mv main.exe ~/shared/

lin:
	gcc main.c -o main.o
	./main.o

prod:
	x86_64-w64-mingw32-gcc main.c -o shrek.exe
	mv shrek.exe ~/compiled/