# 0x0F. C - Function pointers

## Resources

## Learning Objectives

## Tasks

---

<details>
<summary>
<a href="./0-print_name.c">0. What's my name</a>
</summary>

### 0\. What's my name

```c
#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name_as_is - prints a name as is
 * @name: name to print
 *
 * Return: void
 */
void print_name_as_is(char *name)
{
	printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - prints a name in uppercase
 * @name: name to print
 *
 * Return: void
 */
void print_name_uppercase(char *name)
{
    int i;

    printf("Hello, my uppercase name is ");
    for (i = 0; name[i]; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
            printf("%c", name[i] - 32);
        else
            printf("%c", name[i]);
    }
    printf("\n");
}

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	print_name("Bob", print_name_as_is);
	print_name("Bob Dylan", print_name_uppercase);
	printf("\n");
    return (0);
}
```

> Compiled with: `gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-print_name.c -o 0-print_name`
> Output:
> ```shell
> $ ./0-print_name
> Hello, my name is Bob
> Hello, my uppercase name is BOB DYLAN
> ```

</details>

--- 

<details>
<summary>
<a href="./1-array_iterator.c">1. If you spend too much time thinking about a thing, you'll never get it done</a>
</summary>

### 1\. If you spend too much time thinking about a thing, you'll never get it done

```c
#include "function_pointers.h"
#include <stdio.h>

/**
 * print_elem - prints an integer
 * @elem: integer to print
 *
 * Return: void
 */
void print_elem(int elem)
{
    printf("%d\n", elem);
}

/**
 * print_elem_hex - prints an integer in hexadecimal
 * @elem: integer to print
 *
 * Return: void
 */
void print_elem_hex(int elem)
{
    printf("0x%x\n", elem);
}

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};

    array_iterator(array, 5, print_elem);
    printf("\n");
    array_iterator(array, 5, print_elem_hex);
    return (0);
}
```

> Compiled with: `gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-array_iterator.c -o 1-array_iterator`
> Output:
> ```shell
> $ ./1-array_iterator
> 0
> 98
> 402
> 1024
> 4096
> 
> 0x0
> 0x62
> 0x192
> 0x400
> 0x1000
> ```

</details>

---

<details>
<summary>
<a href="./2-int_index.c">2. To hell with circumstances; I create opportunities</a>
</summary>

### 2\. To hell with circumstances; I create opportunities

```c
#include "function_pointers.h"
#include <stdio.h>

/**
 * is_98 - checks if a number is equal to 98
 * @elem: integer to check
 *
 * Return: 1 if true, 0 otherwise
 */
int is_98(int elem)
{
    return (elem == 98);
}

/**
 * is_strictly_positive - checks if a number is greater than 0
 * @elem: integer to check
 *
 * Return: 1 if true, 0 otherwise
 */
int is_strictly_positive(int elem)
{
    return (elem > 0);
}

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};
    int index;

    index = int_index(array, 5, is_98);
    printf("%d\n", index);
    index = int_index(array, 5, is_strictly_positive);
    printf("%d\n", index);
    index = int_index(array, 5, NULL);
    printf("%d\n", index);
    return (0);
}
```

> Compiled with: `gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-int_index.c -o 2-int_index`
> Output:
> ```shell
> $ ./2-int_index
> 1
> 2
> -1
> ```

</details>

---

