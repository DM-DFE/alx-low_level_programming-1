CC=gcc
CFLAGS=-Wall -Wextra -Werror -pedantic -std=c99 -g

all:
	@echo "Usage: make [target]"

0:
	$(CC) $(CFLAGS) 0-main.c positive_or_negative.c

1:
	$(CC) $(CFLAGS) 1-main.c -o 1-main

2:
	$(CC) $(CFLAGS) 2-main.c 2-largest_number.c -o 2-main

3-a:
	$(CC) $(CFLAGS) 3-print_remaining_days.c 3-convert_day.c 3-main_a.c -o 3-main_a

3-b:
	$(CC) $(CFLAGS) 3-print_remaining_days.c 3-convert_day.c 3-main_b.c -o 3-main_b

clean:
	rm -rf *.dSYM/ a.out 1-main 2-main 3-main_a 3-main_b
