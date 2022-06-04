#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Test sign
 * Return: 0
 */
int main(void)
{
	int x = 'a';

	for (; x <= 'z'; x++)
	{
		if (x == 'q' || x == 'e')
			x++;
		putchar(x);
	}
	putchar('\n');
	return (0);
}
