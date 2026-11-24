CC = gcc
CFLAGS = -std=c17 -Wall -Wextra -Wpedantic -g -Iinclude

TARGET = syswatch

SRC = src/main.c \
      src/system.c \
      src/game.c \
      src/missions.c \
      src/signals.c

OBJ = build/main.o \
      build/system.o \
      build/game.o \
      build/missions.o \
      build/signals.o

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

build/main.o: src/main.c
	$(CC) $(CFLAGS) -c src/main.c -o build/main.o

build/system.o: src/system.c include/system.h
	$(CC) $(CFLAGS) -c src/system.c -o build/system.o

build/game.o: src/game.c include/game.h
	$(CC) $(CFLAGS) -c src/game.c -o build/game.o

build/missions.o: src/missions.c include/missions.h
	$(CC) $(CFLAGS) -c src/missions.c -o build/missions.o

build/signals.o: src/signals.c include/signals.h
	$(CC) $(CFLAGS) -c src/signals.c -o build/signals.o

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJ) $(TARGET)

rebuild: clean $(TARGET)

.PHONY: run clean rebuild
