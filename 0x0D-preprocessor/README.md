# 0x0D. C - Preprocessor

## Resources
- [Understanding C program Compilation Process](https://www.youtube.com/watch?v=eW5he5uFBNM)
- [Object-like Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Object-like-Macros.html#Object-like-Macros)
- [Macro Arguments](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Macro-Arguments.html#Macro-Arguments)
- [Pre Processor Directives in C](https://www.youtube.com/watch?v=X6HiYbY3Uak)
- [The C Preprocessor](https://www.cprogramming.com/tutorial/cpreprocessor.html)
- [Standard Predefined Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Standard-Predefined-Macros.html#Standard-Predefined-Macros)
- [include guard](https://en.wikipedia.org/wiki/Include_guard)
- [Common Predefined Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Common-Predefined-Macros.html#Common-Predefined-Macros)

## Learning Objectives
- [What are macros and how to use them](#what-are-macros-and-how-to-use-them)
- [What are the most common predefined macros](#what-are-the-most-common-predefined-macros)
- [How to include guard your header files](#how-to-include-guard-your-header-files)


## Tasks
- [0. Object-like Macro](./0-object_like_macro.h)
- [1. Pi](./1-pi.h)
- [2. File name](./2-main.c)
- [3. Function-like macro](./3-function_like_macro.h)
- [4. SUM](./4-sum.h)
- [5. Worst abuse of the C preprocessor (IOCCC winner, 1986)](./101-preprocessor_abuse.c)
- [6. Fun with the preprocessor](./main.c)
- [7. Crackme4](./100-crackme_password)
- [8. Hexadecimal](./101-hexadecimal)
- [9. Patience, persistence and perspiration make an unbeatable combination for success](./102-opcodes)
- [10. Ineffective Is a big word to describe what you just did](./103-function_like_macro.h)
- [11. It's not bragging if you can back it up](./104-function_like_macro.h)
- [12. Noise is a buffer, more effective than cubicles or booth walls](./105-square_macro.h)
- [13. A goal is not always meant to be reached, it often serves simply as something to aim at](./106-preprocessor_abuse.c)

---

<details>

<summary><a href="./0-object_like_macro.h">0. Object-like Macro</a></summary>

### 0. Object-like Macro

```c
#include "0-object_like_macro.h"
#include "0-object_like_macro.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = 98 + SIZE;
    printf("%d\n", s);
    return (0);
}
```

> Compiled with `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a`

> Output:

```bash
$ ./a
1122
$ 
```

</details>

---

<details>

<summary><a href="./1-pi.h">1. Pi</a></summary>

### 1. Pi

```c
#include "1-pi.h"
#include "1-pi.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    float a;
    float r;

    r = 98;
    a = PI * r * r;
    printf("%.3f\n", a);
    return (0);
}
```

> Compiled with `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c -o b`

> Output:

```bash
$ ./b
30171.855
$ 
```

</details>

---

<details>

<summary><a href="./2-main.c">2. File name</a></summary>

### 2. File name

> Compiled with `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c -o c`

> Output:

```bash
$ ./c
2-main.c
$ cp 2-main.c 02-main.c
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 02-main.c -o cc
$ ./cc
02-main.c
$ 
```

</details>

---

<details>

<summary><a href="./3-function_like_macro.h">3. Function-like macro</a></summary>

### 3. Function-like macro

```c
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a;
    int b;

    a = ABS(-98) * 10;
    b = ABS(98) * 10;
    printf("%d, %d\n", a, b);
    return (0);
}
```

> Compiled with `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d`

> Output:

```bash
$ ./d
980, 980
$ 
```

</details>

---

<details>

<summary><a href="./4-sum.h">4. SUM</a></summary>

### 4. SUM

```c
#include "4-sum.h"
#include "4-sum.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = SUM(98, 1024);
    printf("%d\n", s);
    return (0);
}
```

> Compiled with `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c -o e`
> Output:

```bash
$ ./e
1122
$ 
```
