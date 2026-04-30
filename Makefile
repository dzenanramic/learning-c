CC = gcc
CFLAGS = -Wall -Wextra -std=c99

SOURCES = $(wildcard ch*/*.c)
EXECUTABLES = $(SOURCES:.c=)

all: $(EXECUTABLES)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	find . -type f -not -name "*.c" -not -name "*.md" -not -name "Makefile" -not -name ".gitignore" -executable -delete

.PHONY: all clean
