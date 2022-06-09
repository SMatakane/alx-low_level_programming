#include "main.h"

/**
 * print_diagonal - prints line
 * @n: length of line
 * Return: 0
 */
void print_diagonal(int n)
{
	int i = 0;

	_putchar('\n');
	for (; i < n; i++)
	{
		int j = 0;

		for (; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
