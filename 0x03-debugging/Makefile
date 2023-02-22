CC=gcc
CFLAGS=-I. -Wall -Wextra -Werror -pedantic -std=c99

all:
	@echo "Usage: make [target]"

0:
	$(CC) $(CFLAGS) 0-main.c tests/positive_or_negative.c -o 0-main

1:
	$(CC) $(CFLAGS) 1-main.c -o 1-main

2:
	$(CC) $(CFLAGS) tests/2-main.c 2-largest_number.c -o 2-main

3-a:
	$(CC) $(CFLAGS) 3-print_remaining_days.c tests/3-convert_day.c tests/3-main_a.c -o 3-main_a

3-b:
	$(CC) $(CFLAGS) 3-print_remaining_days.c tests/3-convert_day.c tests/3-main_b.c -o 3-main_b

clean:
	rm -f 0-main 1-main 2-main 3-main_a 3-main_b
