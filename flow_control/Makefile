# Keep in mind that this make file is being run in Windows Powershell.
# I am not sure if all the commands used here ("rm -f", for example) will also
# work in WSL/Linux.

main: main.o
	g++ -std=c++23 -g main.o -o main

main.o: main.cpp
	g++ -std=c++23 -g -c main.cpp -o main.o

clean:
	rm -f main main.o

help:
	@echo "main: make main"
	@echo "clean: remove main and main.o"
	@echo "help: show this message"