# 0x00. C -Hello, World
# 0x00. C -Hello, World

## Resources

- [C - Books and PDFs - Reference](../references)
- [Dennis Ritchie - Creator of C](https://en.wikipedia.org/wiki/Dennis_Ritchie)
- [C Programming Language: Brian Kernighan - Computerphile](https://www.youtube.com/watch?v=de2Hsvxaf8M).
- [Learning to Program in C by Jonathan Engelsma - YouTube Playlist](https://youtube.com/playlist?list=PLIsXzR_wZY-yQMHOK7D3Dls4VoTGuRovd)
- [Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA).
- [Holberton Betty Guide - C coding style](https://github.com/holbertonschool/Betty/wiki)
- [Hash-bang under the hood](https://twitter.com/unix_byte/status/1024147947393495040?s=21).
- [Linus Torvalds on C vs C++](http://harmful.cat-v.org/software/c++/linus).
- [UPEvent: GCC and Makefiles](https://youtu.be/OnEF1MexJlI)

## Tasks

<details>
<summary><a href="./0-preprocessor">0. Preprocessor</a></summary><br>

#### Preprocessor - Task
Write a script that runs a C file through the preprocessor and save the result into another file.

* The C file name will be saved in the variable $CFILE
* The output should be saved in the file c

#### Solution: `gcc -E $CFILE -o c`
##### Explanation:
This command uses the GNU Compiler Collection (GCC) to preprocess a C source code file and save the result to a file named c. 

##### Command breakdown:
* `gcc` invokes the GCC compiler driver to process the input file.
* `-E` option tells GCC to stop after preprocessing stage and output the preprocessed code to stdout or a file.
* `"$CFILE"` specifies the input C source code file to be preprocessed. The `$CFILE` is a shell variable that holds the name of the input file, and the surrounding quotes are used to prevent word splitting and filename expansion by the shell.
* `-o c` option specifies the output file name. Here, the output is saved to a file named c in the current directory.

##### Summary:
This command is preprocessing the C source code file specified by the $CFILE variable and saving the result to a file named c. The preprocessed code will contain all the preprocessor directives expanded and all the comments removed, but will not be compiled or linked to create an executable program.
</details>

<details>
<summary><a href="./1-compiler">1. Compiler</a></summary><br>

#### Compiler - Task
Write a script that compiles a C file but does not link.

* The C file name will be saved in the variable $CFILE
* The output file should be named the same as the C file, but with the extension .o instead of .c.
  * Example: if the C file is main.c, the output file should be main.o

#### Solution: `gcc -c $CFILE`

#### Explanation:
This command uses the GNU Compiler Collection (GCC) to compile a C source code file and generate an object file.

#### Command breakdown:
- `gcc` invokes the GCC compiler driver to process the input file.
- `-c` option tells GCC to stop after the compilation stage and generate an object file.
- `"$CFILE"` specifies the input C source code file to be compiled.

#### Summary:
This command is compiling the C source code file specified by the `$CFILE` variable and generating an object file with the same name as the input file, but with a `.o` extension. The object file will contain the compiled machine code for the source file, but will not be linked to create an executable program. You can then link this object file with other object files and libraries to create an executable program.

</details>

<details>
<summary><a href="./2-assembler">2. Assembler</a></summary><br>

#### Assembler - Task

#### Solution: `gcc -S $CFILE`

#### Explanation:
This command uses the GNU Compiler Collection (GCC) to compile a C source code file and generate an assembly language code file.

#### Command breakdown:

- `gcc` invokes the GCC compiler driver to process the input file.
- `-S` option tells GCC to stop after the compilation stage and generate an assembly language code file.
- `"$CFILE"` specifies the input C source code file to be compiled.

#### Summary:
This command is compiling the C source code file specified by the `$CFILE` variable and generating an assembly language code file with the same name as the input file, but with a `.s` extension. The generated assembly code will be specific to the target architecture and operating system. You can then inspect the generated assembly code to understand how the source code is translated into machine code by the compiler.

</details>

<details>
<summary><a href="./3-name">3. Name</a></summary><br>

#### Name - Task
Write a script that compiles a C file and creates an executable named `cisfun`.

- The C file name will be saved in the variable `$CFILE`

#### Solution: `gcc -o cisfun $CFILE`

#### Explanation:
This command uses the GNU Compiler Collection (GCC) to compile a C source code file and generate an executable program.

#### Command breakdown:

- `gcc` invokes the GCC compiler driver to process the input file.
- `-o cisfun` option specifies the name of the output executable program.
- `"$CFILE"` specifies the input C source code file to be compiled.

#### Summary:
This command is compiling the C source code file specified by the `$CFILE` variable and generating an executable program named `cisfun`. The executable program will be specific to the target architecture and operating system. You can then run the executable program to execute the compiled machine code.

</details>


<details>
<summary><a href="./4-puts.c">4. Hello, puts</a></summary><br>

#### puts - Task
Write a C program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line.

- Use the function `puts`
- You are not allowed to use `printf`
- Your program should end with the value `0`
- Compile and run this way: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c -o puts`.

#### Solution: [4-puts.c](./4-puts.c)

</details>


<details>
<summary><a href="./5-printf.c">5. Hello, printf</a></summary><br>

#### printf - Task
Write a C program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line.

- Use the function `printf`
- You are not allowed to use the function `puts`
- Your program should return `0`
- Your program should compile without warning when using the `-Wall gcc` option

#### Solution: [5-printf.c](./5-printf.c)

</details>


<details>
<summary><a href="./6-size.c">6. Size is not grandeur, and territory does not make a nation</a></summary><br>

#### size - Task
This program prints the size of various types on the computer it is compiled and run on using the `sizeof` operator.

- Compile this way: `gcc 6-size.c -m32 -o size32 2> /tmp/32` & `gcc 6-size.c -m64 -o size64 2> /tmp/64`
- Compare outputs for the `size32` and `size64`.

#### Solution: [6-size.c](./6-size.c)

#### Explanation: [sizeof()](https://en.cppreference.com/w/cpp/language/sizeof)
In C, `sizeof()` is an operator that returns the size, in bytes, of a given data type or variable. The syntax for `sizeof()` is as follows: `sizeof(type)`.\
Here, `type` can be any data type, such as `int`, `float`, `double`, `char`, or a user-defined struct or union.\
The `sizeof()` operator is often used in C to allocate memory dynamically, as well as to determine the size of data types or arrays at runtime. It is also used to calculate the number of elements in an array by dividing the total size of the array by the size of each element.

Here are some important points to keep in mind about the `sizeof()` operator:
- The size returned by `sizeof()` is always in bytes.
- The `sizeof()` operator can be used on primitive data types, as well as complex data types like structs and unions.
- When applied to an array, `sizeof()` returns the total size of the array in bytes, not the number of elements in the array.
- The `sizeof()` operator does not evaluate the expression it is applied to. It only determines the size of the data type, regardless of whether it is a variable or a constant.

Overall, the `sizeof()` operator is a fundamental part of C programming and is essential for working with memory, data types, and arrays.

</details>

<details>
<summary><a href="./100-intel">7. Intel</a></summary><br>

#### intel - Task

Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

- The C file name will be saved in the variable `$CFILE`.
- The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
  - Example: if the C file is `main.c`, the output file should be `main.s`.

#### Solution: `gcc -S -masm=intel $CFILE`

#### Explanation:
This command uses the GNU Compiler Collection (GCC) to compile a C source code file and generate an assembly language code file in Intel syntax.

#### Command breakdown:
- `gcc` invokes the GCC compiler driver to process the input file.
- `-S` option tells GCC to stop after the compilation stage and generate an assembly language code file.
- `-masm=intel` option sets the output syntax to Intel, which is the most commonly used syntax for assembly code.
- `$CFILE` specifies the input C source code file to be compiled. The `$CFILE` is a shell variable that holds the name of the input file.

#### Summary:
This command is compiling the C source code file specified by the `$CFILE` variable and generating an assembly language code file with the same name as the input file, but with a `.s` extension. The generated assembly code will be in Intel syntax, which is more readable and easier to understand than the default syntax. You can then inspect the generated assembly code to understand how the source code is translated into machine code by the compiler.

</details>

<details>
<summary><a href="./101-quote.c">8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity</a></summary><br>

#### Quote - Task
Write a C program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error.

- You are not allowed to use any functions listed in the NAME section of the man (3) `printf` or man (3) `puts`
- Your program should return 1
- Your program should compile without any warnings when using the `-Wall gcc` option

#### Solution: [101-quote.c](./101-quote.c)

#### Explanation:
This program uses the `write` system call to print the string to the standard error file descriptor.

#### Command breakdown:
- A character pointer variable `str` is declared and initialized with a string literal. The string contains the text `"and that piece of art is useful" - Dora Korpar, 2015-10-19\n"` followed by an escape sequence that represents a newline character.
- A `while` loop is used to iterate over each character of the string. The loop continues as long as the value pointed to by `str` is not the null character, which is used to terminate C strings.
- Inside the loop, the `write()` system call is used to write the character pointed to by `str` to the standard error output, which is represented by the file descriptor `STDERR_FILENO` (usually 2). The `str++` expression increments the pointer str to point to the next character in the string.
- The loop continues until the null character is encountered, which signals the end of the string.

#### Summary:
hThis program writes the string "and that piece of art is useful" - Dora Korpar, 2015-10-19" to the standard error output, character by character.

</details>