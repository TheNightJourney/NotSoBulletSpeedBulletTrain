all: train_system.exe

train_system.exe: utils.o
	gcc -o train_system train_system.c utils.o

utils.o: library/utils.c
	gcc -c library/utils.c
	gcc -o train_system.exe train_system.c utils.o

clear:
	rm *.exe
	rm *.o