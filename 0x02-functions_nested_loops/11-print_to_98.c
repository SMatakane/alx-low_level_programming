#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints to 98
 * @n: value
 * Return: 0
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d, ", n);
		n++;
	}
	_putchar('\n');
}
