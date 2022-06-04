#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Test sign
 * Return: 0
 */
int main(void)
{
	int x = 'A';

	for (; x <= 'z'; x++)
	{
		if (x == '[')
			x = 'a';
		putchar(x);
	}
	putchar('\n');
	return (0);
}
