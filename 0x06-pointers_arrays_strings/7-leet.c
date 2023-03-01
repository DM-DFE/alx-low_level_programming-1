#include "main.h"

/**
 * _toupper - converts a lowercase letter to uppercase
 * @c: character to convert
 * Return: uppercase character
 */
static int _toupper(int c)
{
	return ((c >= 'a' && c <= 'z') ? c - 32 : c);
}

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 * Return: pointer to encoded string
 */
char *leet(char *s)
{
	int i, j;
	char *letters = "AEOTL";
	char *leet = "43071";

	for (i = 0; s[i]; i++)
		for (j = 0; letters[j]; j++)
			(_toupper(s[i]) == letters[j]) ? s[i] = leet[j] : s[i];

	return (s);
}
