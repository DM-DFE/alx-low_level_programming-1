cmake_minimum_required(VERSION 3.24)
project(0x06_pointers_arrays_strings C)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Werror -pedantic -std=gnu89")

include_directories(.)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

add_executable(0-strcat 0-strcat.c test_files/0-main.c)
add_executable(1-strncat 1-strncat.c test_files/1-main.c)
add_executable(2-strncpy 2-strncpy.c test_files/2-main.c)
add_executable(3-strcmp 3-strcmp.c test_files/3-main.c)
add_executable(4-rev_array 4-rev_array.c test_files/4-main.c)
add_executable(5-string_toupper 5-string_toupper.c test_files/5-main.c)
add_executable(6-cap_string 6-cap_string.c test_files/6-main.c)
add_executable(7-1337 7-leet.c test_files/7-main.c)
add_executable(100-rot13 100-rot13.c test_files/100-main.c)
add_executable(101-print_number 101-print_number.c test_files/_putchar.c test_files/101-main.c)
add_executable(102-magic 102-magic.c)
add_executable(103-add 103-infinite_add.c test_files/103-main.c)
add_executable(104-print_buffer 104-print_buffer.c test_files/104-main.c)



