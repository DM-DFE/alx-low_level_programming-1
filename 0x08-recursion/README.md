# 0x08. C - Recursion

## Resources
## Learning Objectives


## Tasks
- All `*-main.c` files are provided in the `[test_files](./test_files)` directory.
- We will be using function prototypes from the `[main.h](./main.h)` header file for this project.

---

<details>
<summary><a href="0-puts_recursion.c">0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget</a></summary>

<img src="./imgs/0-memset.png" alt="0-memset">

## Task 0

<img src="./imgs/0-puts_recursion.png" alt="puts recursion>

```c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}
```

> compiled with: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion`

> Output:
>```shell
> Puts with recursion 
>```

</details>

---

<details>
<summary><a href="1-memcpy.c">1. memcpy</a></summary>

## Task 1

<img src="./imgs/1-print_rev_recursion.png" alt="print in reverse with recursion">

```c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}
```

> Compiled with: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-print_rev_recursion.c -o 1-print_rev_recursion`

> Output:
> ```shell
> reklaW notloC
>```

</details>

---

<details>
<summary><a href="2-strlen_recursion.c">2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange</a></summary>

## Task 2

<img src="./imgs/2-strlen_recursion.png" alt="string length with recursion">

```c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}
```

> Compiled with: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strlen_recursion.c -o 2-strlen_recursion`

> Output:
> ```shell
> 14
>```

</details>

---
