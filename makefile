all:
	g++ -Wall main.cpp functions.cpp -o c310.o -std=c++11
run: all
	./c310.o input.txt
clean:
	rm c310.o || rm *.o
