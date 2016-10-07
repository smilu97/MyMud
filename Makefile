RM = rm -f
CC = g++
CFLAGS = -O1 -I h -std=C++11
OUT = mymud

CFILES = $(CFILES1) $(CFILES2) $(CFILES3)
CFILES1 = cpp/Creature.cpp cpp/MainProgram.cpp cpp/Object.cpp
CFILES2 = cpp/PlayerObject.cpp cpp/Position.cpp cpp/run.cpp
CFILES3 = cpp/Tile.cpp

HEADS = $(HEADS1) $(HEADS2)
HEADS1 = h/Creature.h h/MainProgram.h h/Object.h h/PlayerObject.h
HEADS2 = h/Position.h h/run.h h/Tile.h

.PHONY: all clean

all: build

clean:

build: $(CFILES) $(HEADS)
	$(CC) $(CFLAGS) -c $(CFILES)
	$(CC) -o $(OUT) 