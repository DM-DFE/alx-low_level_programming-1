#include "../main.h"
#include <stdio.h>

int main(void)
{
	/* Tests for _isupper */
	_isupper('A') ? printf("OK\n") : printf("KO\n");
	_isupper('a') ? printf("OK\n") : printf("KO\n");
	_isupper('Z') ? printf("OK\n") : printf("KO\n");
	_isupper('z') ? printf("OK\n") : printf("KO\n");
	_isupper('0') ? printf("OK\n") : printf("KO\n");
	_isupper('9') ? printf("OK\n") : printf("KO\n");
	_isupper(' ') ? printf("OK\n") : printf("KO\n");
	_isupper(65) ? printf("OK\n") : printf("KO\n");

	return (0);
}
