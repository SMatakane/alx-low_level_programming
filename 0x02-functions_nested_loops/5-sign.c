#include <stdio.h>

/**
 * print_sign - main
 * @n: value to test
 * Return: -1 if neg 0 if 0 and 1 if positive
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else
	{
		putchar('0');
		return (0);
	}
}
