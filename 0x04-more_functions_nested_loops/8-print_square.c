#include "main.h"

/**
 * print_square - prints squares
 * @size: size
 * Return: void
 */
void print_square(int size)
{
	int i = 0;

	for (; i < size; i++)
	{
		int j = 0;

		for (; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
