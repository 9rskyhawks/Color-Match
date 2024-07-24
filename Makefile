CC = gcc
CFLAGS = -Wall -Wextra -std=c99
SRC = src/main.c src/game.c
OBJ = $(SRC:.c=.o)
TARGET = match-three

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean
