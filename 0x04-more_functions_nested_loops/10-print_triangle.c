#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i = 0;
	int hashes = size - 1;
	int spaces = size;

	for (; i < size; i++)
	{
		int space = 0;
		int hash = hashes;

		for (; space < spaces; space++)
			_putchar(' ');
		for (; hash < size; hash++)
			_putchar('#');
		_putchar('\n');
		spaces--;
		hashes--;

	}
	if (size <= 0)
		_putchar('\n');
}
