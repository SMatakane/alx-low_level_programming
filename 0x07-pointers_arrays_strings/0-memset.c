#include "main.h"

/**
 * _memset - sets mem of src
 * @s: char input
 * @b: char input
 * @n: integer input
 * Return: char val
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
