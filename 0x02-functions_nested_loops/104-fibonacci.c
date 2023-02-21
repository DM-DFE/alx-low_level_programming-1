#include <stdio.h>

/*
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
*/
#include <stdio.h>
#include <string.h>
#include <assert.h>

char *str_revese_inplace(char *s) {
  char *left = s;
  char *right = s + strlen(s);
  char t;

  while (right > left) {
    right--;
    t = *right;
    *right = *left;
    *left = t;
    left++;
  }
  return s;
}

char *str_add(char *ssum, const char *sa, const char *sb) {
  const char *pa = sa + strlen(sa);
  const char *pb = sb + strlen(sb);
  char *psum = ssum;
  int carry = 0;
  int sum;

  while (pa > sa || pb > sb || carry) {
    sum = carry;
    if (pa > sa) sum += *(--pa) - '0';
    if (pb > sb) sum += *(--pb) - '0';
    *psum++ = sum % 10 + '0';
    carry = sum / 10;
  }
  *psum = '\0';
  return str_revese_inplace(ssum);
}

int main(void) {
  char fib[3][300];
  int i;

  strcpy(fib[0], "0");
  strcpy(fib[1], "1");
  for (i = 2; i < 98; i++) {
    printf("%s%s", str_add(fib[2], fib[1], fib[0]), i < 97 ? ", " : "\n");
    strcpy(fib[0], fib[1]);
    strcpy(fib[1], fib[2]);
  }
  return 0;
}
