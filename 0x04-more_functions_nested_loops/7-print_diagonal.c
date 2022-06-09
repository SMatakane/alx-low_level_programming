#include "main.h"

/**
 * print_line - prints line
 * @n: length of line
 * Return: 0
 */
void print_diagonal(int n)
{
	int i = 0;

	for (; i <= n; i++)
	{
		int j = 0;
		if (i < n)
		{
			for (; j < i; j++)
				_putchar(' ');
			_putchar('\\');
		}
		_putchar('\n');
	}
}
