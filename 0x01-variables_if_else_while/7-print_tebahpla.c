#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Test sign
 * Return: 0
 */
int main(void)
{
	int x = 'z';

	for (; x <= 'a'; x--)
		putchar(x);
	putchar('\n');
	return (0);
}
