# 0x00. C -Hello, World
# 0x00. C -Hello, World

## Resources

- [C - Books and PDF's - Reference](../references)
- [Dennis Ritchie - Creator of C](https://en.wikipedia.org/wiki/Dennis_Ritchie)
- [C Programming Language: Brian Kernighan - Computerphile](https://www.youtube.com/watch?v=de2Hsvxaf8M).
- [Learning to Program in C by Jonathan Engelsma - Youtube Playlist](https://youtube.com/playlist?list=PLIsXzR_wZY-yQMHOK7D3Dls4VoTGuRovd)
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

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/qRyzw2ng/image.png' border='0' alt='image'/></a>
- Here is the *[$CFILE](./main/main.c)* file.

</details>


<details>
<summary><a href="./4-puts.c">4. Hello, puts</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/bJt257Xy/image.png' border='0' alt='image'/></a>
- Compile and run this way: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c -o puts`.

</details>


<details>
<summary><a href="./5-printf.c">5. Hello, printf</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/14xVPJQG/image.png' border='0' alt='image'/></a>
- Compile this way: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c -o printf`.

</details>


<details>
<summary><a href="./6-size.c">6. Size is not grandeur, and territory does not make a nation</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/3rqgnFPJ/image.png' border='0' alt='image'/></a>
- Compile this way: `gcc 6-size.c -m32 -o size32 2> /tmp/32` & `gcc 6-size.c -m64 -o size64 2> /tmp/64`
- Compare outputs for the `size32` and `size64`.

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

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/HkGmdF7c/image.png' border='0' alt='image'/></a>
- Compile this way: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c`.

</details>