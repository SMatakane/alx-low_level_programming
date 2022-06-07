#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints to 98
 * @n: value
 * Return: 0
 */
void print_to_98(int n)
{
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
	printf("98\n");
}
