// Ejercicio 18.10. Introducción a Makefile.
# Makefile mínimo
CC      := gcc
CFLAGS  := -std=c23 -Wall -Wextra -O2 -Iinclude
SRCS    := src/main.c src/ops.c
OBJS    := $(SRCS:src/%.c=build/%.o)
BIN     := build/programa

$(BIN): $(OBJS)
$(CC) $(OBJS) -o $(BIN)

build/%.o: src/%.c
mkdir -p build
$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
rm -rf build

