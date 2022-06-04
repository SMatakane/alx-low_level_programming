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
		putchar(x);
	}
	x = 'A';
	for (; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
