CC=gcc
CFLAGS=-Wall -Wextra -Werror -pedantic -std=c89
TESTDIR=tests

.PHONY: all 0 1 2 3 4 5 6 7 8 9 10 100 101 clean

all:
	@echo "Usage: make [task number]"

betty:
	@echo "\nRunning betty-style...\n"
	@echo -n "main.h: "
	@betty main.h | if [ $$? -eq 0 ]; then echo "OK"; else echo "FAIL"; fi
	@echo -n "0-isupper.c: "
	@betty 0-isupper.c | if [ $$? -eq 0 ]; then echo "OK"; else echo "FAIL"; fi
	@echo -n "1-isdigit.c: "
	@betty 1-isdigit.c | if [ $$? -eq 0 ]; then echo "OK"; else echo "FAIL"; fi
	@echo -n "2-mul.c: "
	@betty 2-mul.c | if [ $$? -eq 0 ]; then echo "OK"; else echo "FAIL"; fi
	@echo -n "3-print_numbers.c: "
	@betty 3-print_numbers.c | if [ $$? -eq 0 ]; then echo "OK"; else echo "FAIL"; fi
	@echo -n "4-print_most_numbers.c: "
	@betty 4-print_most_numbers.c | if [ $$? -eq 0 ]; then echo "OK"; else echo "FAIL"; fi
	@echo -n "5-more_numbers.c: "
	@betty 5-more_numbers.c | if [ $$? -eq 0 ]; then echo "OK"; else echo "FAIL"; fi
	@echo -n "6-print_line.c: "
	@betty 6-print_line.c | if [ $$? -eq 0 ]; then echo "OK"; else echo "FAIL"; fi
	@echo -n "7-print_diagonal.c: "
	@betty 7-print_diagonal.c | if [ $$? -eq 0 ]; then echo "OK"; else echo "FAIL"; fi
	@echo -n "8-print_square.c: "
	@betty 8-print_square.c | if [ $$? -eq 0 ]; then echo "OK"; else echo "FAIL"; fi
	@echo -n "9-fizz_buzz.c: "
	@betty 9-fizz_buzz.c | if [ $$? -eq 0 ]; then echo "OK"; else echo "FAIL"; fi
	@echo -n "10-print_triangle.c: "
	@betty 10-print_triangle.c | if [ $$? -eq 0 ]; then echo "OK"; else echo "FAIL"; fi
	@echo -n "100-prime_factor.c: "
	@betty 100-prime_factor.c | if [ $$? -eq 0 ]; then echo "OK"; else echo "FAIL"; fi
	@echo -n "101-print_number.c: "
	@betty 101-print_number.c | if [ $$? -eq 0 ]; then echo "OK"; else echo "FAIL"; fi
	@echo "\nDone."

0:
	@$(CC) $(CFLAGS) $(TESTDIR)/0-main.c 0-isupper.c -o 0-isupper
	@./0-isupper

1:
	@$(CC) $(CFLAGS) $(TESTDIR)/1-main.c 1-isdigit.c -o 1-isdigit
	@./1-isdigit
2:
	@$(CC) $(CFLAGS) $(TESTDIR)/2-main.c 2-mul.c -o 2-mul
	@./2-mul

3:
	@$(CC) $(CFLAGS) $(TESTDIR)/3-main.c $(TESTDIR)/_putchar.c 3-print_numbers.c -o 3-print_numbers
	@./3-print_numbers

4:
	@$(CC) $(CFLAGS) $(TESTDIR)/4-main.c $(TESTDIR)/_putchar.c 4-print_most_numbers.c -o 4-print_most_numbers
	@./4-print_most_numbers

5:
	@$(CC) $(CFLAGS) $(TESTDIR)/5-main.c $(TESTDIR)/_putchar.c 5-more_numbers.c -o 5-more_numbers
	@./5-more_numbers

6:
	@$(CC) $(CFLAGS) $(TESTDIR)/6-main.c $(TESTDIR)/_putchar.c 6-print_line.c -o 6-print_line
	@./6-print_line

7:
	@$(CC) $(CFLAGS) $(TESTDIR)/7-main.c $(TESTDIR)/_putchar.c 7-print_diagonal.c -o 7-print_diagonal
	@./7-print_diagonal

8:
	@$(CC) $(CFLAGS) $(TESTDIR)/8-main.c $(TESTDIR)/_putchar.c 8-print_square.c -o 8-print_square
	@./8-print_square

9:
	@$(CC) $(CFLAGS) 9-fizz_buzz.c -o 9-fizz_buzz
	@./9-fizz_buzz

10:
	@$(CC) $(CFLAGS) $(TESTDIR)/10-main.c $(TESTDIR)/_putchar.c 10-print_triangle.c -o 10-print_triangle
	@./10-print_triangle

100:
	@$(CC) $(CFLAGS) 100-prime_factor.c -o 100-prime_factor
	@./100-prime_factor

101:
	@$(CC) $(CFLAGS) 101-print_number.c $(TESTDIR)/101-main.c $(TESTDIR)/_putchar.c -o 101-print_number
	@./101-print_number

clean:
	@rm -f 0-isupper 1-isdigit 2-mul 3-print_numbers 4-print_most_numbers 5-more_numbers 6-print_line 7-print_diagonal 8-print_square 9-fizz_buzz 10-print_triangle 100-prime_factor 101-print_number
	@echo "Cleaned up!"
