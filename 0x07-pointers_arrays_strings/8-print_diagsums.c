#include <stdio.h>

/**
 * print_diagsums - prints sums
 * @a: value
 * @size: size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int b = 0;
	int c = 0;

	while (i < (size * size))
	{
		j = *(a + i);
		b += j;
		i += size + 1;
	}
	i = size - 1;
	while (i < ((size * size) - 1))
	{
		j = *(a + i);
		c += j;
		i += size - 1;
	}
	printf("%d, %d\n", b, c);
}
