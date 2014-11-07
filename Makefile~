CC=g++
CFLAGS= -Wall -std=c++11 -W
DEPS = Singleton.h


all: robot

robot: Singleton.o main.o $(DEPS)
	$(CC) Singleton.o main.o -o robot $(CFLAGS) 
	
main.o: main.cpp
	$(CC) -c main.cpp $(CFLAGS) 
	
Singleton.o: Singleton.cpp
	$(CC) -c Singleton.h Singleton.cpp $(CFLAGS) 

clean:
	rm -rf *.o robot
	



