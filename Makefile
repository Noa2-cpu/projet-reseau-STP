CC = gcc
CFLAGS = -Wall -Wextra -Wno-unused-parameter -Werror -pedantic -std=c11

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
EXEC = main

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)

re: clean all

.PHONY: all clean re