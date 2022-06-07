#include <stdio.h>

/**
 * _islower - lower case check
 * @c: character
 * Return: bool
 */
int _islower(int c);

/**
 * main - main
 * Return: 0
 */
int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar('\n');
	return (0);
}

/**
 * _islower - main
 * @c: char
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
