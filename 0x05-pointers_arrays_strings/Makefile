CC			:= gcc
CFLAGS		:= -Wall -Werror -Wextra -pedantic -std=gnu89
RM			:= rm -rf
TEST_DIR	:= test_files
BIN_DIR		:= bin
INCLUDES	:= -I.
CFLAGS		+= $(INCLUDES)

FSANITIZE	:= -fsanitize=signed-integer-overflow

.PHONY: all clean animation 0 1 2 3 4 5 6 7 8 9 100 101

all: 0 1 2 3 4 5 6 7 8 9 100 101

0:
	@mkdir -p $(BIN_DIR)
	@$(CC) $(CFLAGS) $(shell find . -name "$@-main.c") $@-reset_to_98.c -o $(BIN_DIR)/$@-98
	@./$(BIN_DIR)/$@-98

1:
	@mkdir -p $(BIN_DIR)
	@$(CC) $(CFLAGS) $(TEST_DIR)/$@-main.c $@-swap.c -o $(BIN_DIR)/$@-swap
	@./$(BIN_DIR)/$@-swap

2:
	@mkdir -p $(BIN_DIR)
	@$(CC) $(CFLAGS) $(TEST_DIR)/$@-main.c $@-strlen.c -o $(BIN_DIR)/$@-strlen
	@./$(BIN_DIR)/$@-strlen

3:
	@mkdir -p $(BIN_DIR)
	@$(CC) $(CFLAGS) $(TEST_DIR)/$@-main.c $(TEST_DIR)/_putchar.c $@-puts.c -o $(BIN_DIR)/$@-puts
	@./$(BIN_DIR)/$@-puts

4:
	@mkdir -p $(BIN_DIR)
	@$(CC) $(CFLAGS) $(TEST_DIR)/$@-main.c $(TEST_DIR)/_putchar.c $@-print_rev.c -o $(BIN_DIR)/$@-print_rev
	@./$(BIN_DIR)/$@-print_rev

5:
	@mkdir -p $(BIN_DIR)
	@$(CC) $(CFLAGS) $(TEST_DIR)/$@-main.c $@-rev_string.c -o $(BIN_DIR)/$@-rev_string
	@./$(BIN_DIR)/$@-rev_string

6:
	@mkdir -p $(BIN_DIR)
	@$(CC) $(CFLAGS) $(TEST_DIR)/$@-main.c $(TEST_DIR)/_putchar.c $@-puts2.c -o $(BIN_DIR)/$@-puts2
	@./$(BIN_DIR)/$@-puts2

7:
	@mkdir -p $(BIN_DIR)
	@$(CC) $(CFLAGS) $(TEST_DIR)/$@-main.c $(TEST_DIR)/_putchar.c $@-puts_half.c -o $(BIN_DIR)/$@-puts_half
	@./$(BIN_DIR)/$@-puts_half

8:
	@mkdir -p $(BIN_DIR)
	@$(CC) $(CFLAGS) $(TEST_DIR)/$@-main.c $@-print_array.c -o $(BIN_DIR)/$@-print_array
	@./$(BIN_DIR)/$@-print_array

9:
	@mkdir -p $(BIN_DIR)
	@$(CC) $(CFLAGS) $(TEST_DIR)/$@-main.c $@-strcpy.c -o $(BIN_DIR)/$@-strcpy
	@./$(BIN_DIR)/$@-strcpy

100:
	@mkdir -p $(BIN_DIR)
	@$(CC) $(CFLAGS) $(FSANITIZE) $(TEST_DIR)/$@-main.c $@-atoi.c -o $(BIN_DIR)/$@-atoi
	@./$(BIN_DIR)/$@-atoi

101:
	@mkdir -p $(BIN_DIR)
	@$(CC) $(CFLAGS) $@-keygen.c -o $(BIN_DIR)/$@-keygen
	@./$(TEST_DIR)/101-crackme  "`./$(BIN_DIR)/$@-keygen`"


animation:
	@printf "Executing "
	@while [ ! -f target ]; do \
		printf "."; \
		sleep 0.5; \
	done
	@echo " done!"

clean:
	@echo "Cleaning... \c"
	@$(RM) $(BIN_DIR)
	@printf "\033[32mDone!\033[0m\n"
