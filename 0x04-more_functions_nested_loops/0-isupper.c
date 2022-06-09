#include <stdio.h>

/**
 * _islower - main
 * @c: char
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
