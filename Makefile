OBJS	= main.o Point.o
SOURCE	= main.cpp Point.cpp
HEADER	= Point.hpp
OUT	= main
CC	 = g++
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp -std=c11

Point.o: Point.cpp
	$(CC) $(FLAGS) Point.cpp -std=c11

clean:
	rm -f $(OBJS) $(OUT)