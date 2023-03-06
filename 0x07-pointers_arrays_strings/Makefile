CC=gcc
CFLAGS=-Wall -Wextra -Werror -pedantic -std=c89
INCLUDES=-I.

EXPECTED_OUTPUT=expected_output
TEST_FILES=test_files
BIN_DIR=bin

FILE=
PUTCHAR:=${TEST_FILES}/_putchar.c

TEST_FILE:=${TEST_FILES}/$(shell echo ${FILE} | sed 's/-[^-]*\./-main./g')
BIN:=${BIN_DIR}/$(shell basename ${FILE} .c)

all: ${BIN_DIR}
	$(CC) $(INCLUDES) $(CFLAGS) -o ${BIN} ${TEST_FILE} ${FILE}

${BIN_DIR}:
	@mkdir -p ${BIN_DIR}

${TEST_FILE}:
	@echo "${TEST_FILE} does not exist"

clean:
	@rm -rf ${BIN_DIR}