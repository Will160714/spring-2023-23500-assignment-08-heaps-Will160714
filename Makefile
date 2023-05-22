main: main.o heaps.o
	g++ -o main main.o heaps.o

tests: tests.o heaps.o
	g++ -o tests tests.o heaps.o

main.o: main.cpp heaps.h

tests.o: tests.cpp heaps.h

heaps.o: heaps.cpp heaps.h 

clean:
	rm -f main.o tests.o heaps.o