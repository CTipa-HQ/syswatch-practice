CC = gcc
CFLAGS = -std=c17 -Wall -Wextra -Wpedantic -g -Iinclude

TARGET = syswatch

SRC = src/main.c \
      src/sistema.c \
      src/partida.c \
      src/misiones.c \
      src/senales.c

OBJ = build/main.o \
      build/sistema.o \
      build/partida.o \
      build/misiones.o \
      build/senales.o

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

build/main.o: src/main.c
	$(CC) $(CFLAGS) -c src/main.c -o build/main.o

build/sistema.o: src/sistema.c include/sistema.h
	$(CC) $(CFLAGS) -c src/sistema.c -o build/sistema.o

build/partida.o: src/partida.c include/partida.h
	$(CC) $(CFLAGS) -c src/partida.c -o build/partida.o

build/misiones.o: src/misiones.c include/misiones.h
	$(CC) $(CFLAGS) -c src/misiones.c -o build/misiones.o

build/senales.o: src/senales.c include/senales.h
	$(CC) $(CFLAGS) -c src/senales.c -o build/senales.o

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJ) $(TARGET)

rebuild: clean $(TARGET)

.PHONY: run clean rebuild
