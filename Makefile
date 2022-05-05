main: main.o tasks.o 
	g++ -o main main.o tasks.o 

tests: tests.o tasks.o
	g++ -o tests tests.o tasks.o

tasks.o: tasks.cpp tasks.h
	g++ -std=c++11 -c tasks.cpp

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

tests.o: tests.cpp doctest.h
	g++ -std=c++11 -c tests.cpp

clean:
	rm main.o tasks.o tests.o

