#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Test sign
 * Return: 0
 */
int main(void)
{
	int x = '0';

	for (; x <= '9'; x++)
	{
		putchar(x);
		if (x < '9')
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
