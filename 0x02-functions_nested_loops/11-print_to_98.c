#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints to 98
 * @n: value
 * Return: 0
 */
void print_to_98(int n)
{
	int i, j;

	if (n > 98)
	{
		for (; n > 98; n--)
			printf("%d, ", n);
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
			printf("%d, ", n);
	}
	else
		printf("98\n");
}
