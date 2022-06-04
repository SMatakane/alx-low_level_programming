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
	int y = 'a';

	for (; x <= 'f'; x++)
	{
		if (x > '9' && x < 'g')
			x = y;
		putchar(x);
		if (x > '9' && x < 'g')
			y++;
	}
	putchar('\n');
	return (0);
}
