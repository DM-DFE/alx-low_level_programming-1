CC=gcc
CFLAGS=-Wall -Wextra -Werror -pedantic -std=c89
INCLUDES=-I.

TEST_OUTPUT=test_output
TEST_FILES=test_files
BIN_DIR=bin

FILE=
PUTCHAR:=${TEST_FILES}/_putchar.c

TEST_FILE:=${TEST_FILES}/$(shell echo ${FILE} | sed 's/-[^-]*\./-main./g')
BIN:=${BIN_DIR}/$(shell basename ${FILE} .c)
OUTPUT=${TEST_OUTPUT}/$(shell basename ${FILE} .c).out

all: ${BIN_DIR} ${TEST_OUTPUT}
	@$(CC) $(INCLUDES) $(CFLAGS) -o ${BIN} ${TEST_FILE} ${PUTCHAR} ${FILE}
	@./${BIN} > ${OUTPUT} && ./${BIN}

${BIN_DIR}:
	@mkdir -p $@

${TEST_OUTPUT}:
	@mkdir -p $@

clean:
	@rm -rf ${BIN_DIR}
	@rm -rf ${TEST_OUTPUT}
