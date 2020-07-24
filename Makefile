CC = gcc
CPP = g++
LDFLAGS = 
FLAGS = -Wall
OBJ = main.o box.o

all : app

app : $(OBJ)
	$(CPP) -o $@ $^ $(LDFLAGS) $(FLAGS)

main.o : main.cpp
	$(CPP) -c -o $@ $^ $(LDFLAGS) $(FLAGS)

box.o : box.cpp
	$(CPP) -c -o $@ $^ $(LDFLAGS) $(FLAGS)

run : 
	./main

clean :
	rm app $(OBJ)
