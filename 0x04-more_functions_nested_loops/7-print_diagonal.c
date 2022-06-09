#include "main.h"

/**
 * print_line - prints line
 * @n: length of line
 * Return: 0
 */
void print_diagonal(int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
