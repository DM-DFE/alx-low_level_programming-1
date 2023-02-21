CC=gcc
CFLAGS=-Wall -Wextra -Werror -pedantic -std=c99
INC=-I.

PUTCHAR=./tests/_putchar.c

.PHONY: all check_all 1 2 3 4 5 6 7 8 9 10 11 100 101 102 103 104 clean

all:
	@echo "Please choose a task to compile: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 100, 101, 102, 103, 104"

check-all: 1 2 3 4 5 6 7 8 9 10 11 100 101 102 103 104

1:
	@$(CC) $(INC) $(CFLAGS) $(PUTCHAR) tests/1-main.c 1-alphabet.c -o 1-alphabet
	@echo "Checking 1-alphabet..."
	@./1-alphabet
	@printf "\n"


2:
	@$(CC) $(INC) $(CFLAGS) $(PUTCHAR) tests/2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10
	@echo "Checking 2-alphabet_x10..."
	@./2-alphabet_x10
	@printf "\n"

3:
	@$(CC) $(INC) $(CFLAGS) $(PUTCHAR) tests/3-main.c 3-islower.c -o 3-islower
	@echo "Checking 3-islower..."
	@./3-islower
	@printf "\n"

4:
	@$(CC) $(INC) $(CFLAGS) $(PUTCHAR) tests/4-main.c 4-isalpha.c -o 4-isalpha
	@echo "Checking 4-isalpha..."
	@./4-isalpha
	@printf "\n"

5:
	@$(CC) $(INC) $(CFLAGS) $(PUTCHAR) tests/5-main.c 5-sign.c -o 5-sign
	@echo "Checking 5-sign..."
	@./5-sign
	@printf "\n"

6:
	@$(CC) $(INC) $(CFLAGS) $(PUTCHAR) tests/6-main.c 6-abs.c -o 6-abs
	@echo "Checking 6-abs..."
	@./6-abs
	@printf "\n"

7:
	@$(CC) $(INC) $(CFLAGS) $(PUTCHAR) tests/7-main.c 7-print_last_digit.c -o 7-last_digit
	@echo "Checking 7-last_digit..."
	@./7-last_digit
	@printf "\n"

8:
	@$(CC) $(INC) $(CFLAGS) $(PUTCHAR) tests/8-main.c 8-24_hours.c -o 8-24
	@printf "Checking 8-24... ["
	@./8-24 > 8-24.out
	@if cmp -s 8-24.out expected-output/8-expected.out; then printf "SUCCESS"; else printf "FAILED"; fi
	@printf "]\n"
	@rm 8-24.out
	@printf "\n"

9:
	@$(CC) $(INC) $(CFLAGS) $(PUTCHAR) tests/9-main.c 9-times_table.c -o 9-times_table
	@printf "Checking 9-times_table... ["
	@./9-times_table > 9-times_table.out
	@if cmp -s 9-times_table.out expected-output/9-expected.out; then printf "SUCCESS"; else printf "FAILED"; fi
	@printf "]\n"
	@rm 9-times_table.out
	@printf "\n"

10:
	@$(CC) $(INC) $(CFLAGS) $(PUTCHAR) tests/10-main.c 10-add.c -o 10-add
	@echo "Checking 10-add..."
	@./10-add
	@printf "\n"

11:
	@$(CC) $(INC) $(CFLAGS) $(PUTCHAR) tests/11-main.c 11-print_to_98.c -o 11-98
	@printf "Checking 11-98... ["
	@./11-98 > 11-98.out
	@if cmp -s 11-98.out expected-output/11-expected.out; then printf "SUCCESS"; else printf "FAILED"; fi
	@printf "]\n"
	@rm 11-98.out
	@printf "\n"

100:
	@$(CC) $(INC) $(CFLAGS) $(PUTCHAR) tests/100-main.c 100-times_table.c -o 100-times_table
	@printf "Checking 100-times_table... ["
	@./100-times_table > 100-times_table.out
	@if cmp -s 100-times_table.out expected-output/100-expected.out; then printf "SUCCESS"; else printf "FAILED"; fi
	@printf "]\n"
	@rm 100-times_table.out
	@printf "\n"


101:
	@$(CC) $(INC) $(CFLAGS) 101-natural.c -o 101-natural
	@printf "Checking 101-natural... ["
	@./101-natural > 101-natural.out
	@if cmp -s 101-natural.out expected-output/101-expected.out; then printf "SUCCESS"; else printf "FAILED"; fi
	@printf "]\n"
	@rm 101-natural.out
	@printf "\n"

102:
	@$(CC) $(INC) $(CFLAGS) 102-fibonacci.c -o 102-fibonacci
	@printf "Checking 102-fibonacci... ["
	@./102-fibonacci > 102-fibonacci.out
	@if cmp -s 102-fibonacci.out expected-output/102-expected.out; then printf "SUCCESS"; else printf "FAILED"; fi
	@printf "]\n"
	@rm 102-fibonacci.out
	@printf "\n"

103:
	@$(CC) $(INC) $(CFLAGS) 103-fibonacci.c -o 103-fibonacci
	@printf "Checking 103-fibonacci... ["
	@./103-fibonacci > 103-fibonacci.out
	@if cmp -s 103-fibonacci.out expected-output/103-expected.out; then printf "SUCCESS"; else printf "FAILED"; fi
	@printf "]\n"
	@rm 103-fibonacci.out
	@printf "\n"

104:
	@$(CC) $(INC) $(CFLAGS) 104-fibonacci.c -o 104-fibonacci
	@printf "Checking 104-fibonacci... ["
	@./104-fibonacci > 104-fibonacci.out
	@if cmp -s 104-fibonacci.out expected-output/104-expected.out; then printf "SUCCESS"; else printf "FAILED"; fi
	@printf "]\n"
	@rm 104-fibonacci.out
	@printf "\n"


clean:
	@rm -f 0-isupper 1-alphabet 2-alphabet_x10 3-islower 4-isalpha 5-sign 6-abs 7-last_digit 8-24 9-times_table 10-add 11-98 100-times_table 101-natural 102-fibonacci 103-fibonacci 104-fibonacci
	@echo "Cleaned up!"
