# 0x01. C - Variables,if,else,while

## Resources

- [C - Books and PDF's - User as a reference](../references)
- [Keywords and identifiers](https://publications.gbdirect.co.uk//c_book/chapter2/keywords_and_identifiers.html).
- [Integral types](https://publications.gbdirect.co.uk//c_book/chapter2/integral_types.html).
- [Arithmetic Operators in C](https://www.tutorialspoint.com/cprogramming/c_arithmetic_operators.htm).
- [If statements in C](https://www.cprogramming.com/tutorial/c/lesson2.html).
- [C - if...else statement](https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm).
- [Relational Operators in C](https://www.tutorialspoint.com/cprogramming/c_relational_operators.htm).
- [C - Logical Operators](https://fresh2refresh.com/c-programming/c-operators-expressions/c-logical-operators/).
- [while loop in C](https://www.tutorialspoint.com/cprogramming/c_while_loop.htm).
- [While Loop - Youtube](https://youtu.be/Ju1LYO9pkaI)

## Tasks

<details>
<summary><a href="./0-positive_or_negative.c">0. Positive anything is better than negative nothing</a></summary><br>

- [Source Code](https://github.com/holbertonschool/0x01.c/blob/master/0-positive_or_negative_c)
- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative`

</details>

<details>
<summary><a href="./1-last_digit.c">1. The last digit</a></summary><br>

- [Source Code](./https://github.com/holbertonschool/0x01.c/blob/master/1-last_digit_c)
- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit`

</details>

<details>
<summary><a href="./2-print_alphabet.c">2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game</a></summary><br>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet`

<a href='https://postimg.cc/vghQ59Q3' target='_blank'><img src='https://i.postimg.cc/QCGHGkvG/image.png' border='0' alt='image'/></a>

</details>

<details>
<summary><a href="./3-print_alphabets.c">3. alphABET</a></summary><br>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-print_alphabets.c -o 3-print_alphabets`

</details>

<details>
<summary><a href="./4-print_alphabt.c">4. When I was having that alphabet soup, I never thought that it would pay off</a></summary><br>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-print_alphabt.c -o 4-print_alphabt`

</details>


<details>
<summary><a href="./5-print_numbers.c">5. Numbers</a></summary><br>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-print_numbers.c -o 5-print_numbers`

</details>

<details>
<summary><a href="./6-print_numberz.c">6. Numberz</a></summary><br>

- This [ASCII](https://ascii.cl/) table will help you understand my solution.
    - For this you need to understand that `putchar` holds the decimal representation of the variable.
    - So we add `0 == 48` 48 is the decimal value to our single digit integer to convert it into its character representation.
    - Better explanation [here](https://stackoverflow.com/questions/21255038/what-does-putchar0-num-do)
- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-print_numberz.c -o 6-print_numberz`

</details>

<details>
<summary><a href="./7-print_tebahpla.c">7. Smile in the mirror</a></summary><br>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-print_tebahpla.c -o 7-print_tebahpla`

</details>

<details>
<summary><a href="./8-print_base16.c">8. Hexadecimal</a></summary><br>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-print_base16.c -o 8-print_base16`

</details>

<details>
<summary><a href="./9-print_comb.c">9. Patience, persistence and perspiration make an unbeatable combination for success</a></summary><br>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb`

</details>

<details>
<summary><a href="./100-print_comb3.c">10. Inventing is a combination of brains and materials. The more brains you use, the less material you need</a></summary><br>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-print_comb3.c -o 100-print_comb3`

</details>


<details>
<summary><a href="./101-print_comb4.c">11. The success combination in business is: Do what you do better... and: do more of what you do...</a></summary><br>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-print_comb4.c -o 101-print_comb4`

</details>


<details>
<summary><a href="./102-print_comb5.c">12. Software is eating the World</a></summary><br>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-print_comb5.c -o 102-print_comb5`

</details>

## Notes
### `?:` operator
The `?:` operator is called the ternary operator. It is a shortcut for an `if` statement. It is used to evaluate a condition and return a value based on the result of the condition. The syntax is as follows:

```c
condition ? expression1 : expression2;
```
- The `condition` is a boolean expression that is evaluated first.
- If the condition is true, the `expression1` is evaluated and returned.
- If the condition is false, the `expression2` is evaluated and returned.

#### Example
```c
int x = 5;
int y = 10;
int z = x < y ? x : y;
```
In this example, the condition `x < y` is true, so the value of `z` is `x`, which is `5`. 
The ternary operator can be used to simplify `if` statements. For example, the following `if` statement:
```c
if (x < y)
{
    z = x;
}
else
{
    z = y;
}
```
can be rewritten as:
```c
z = x < y ? x : y;
```
