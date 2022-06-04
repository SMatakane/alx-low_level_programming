#include <stdio.h>

/**
 * main - Test sign
 * Return: 0
 */
int main(void)
{
	int x = '0';
	int y = '1';

	for (; x <= '9'; x++)
	{
		int temp = y;

		for (; temp <= '9'; temp++)
		{
			putchar(x);
			putchar(temp);
			if (x < '9' && y < '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
		y++;
	}
	putchar('\n');
	return (0);
}
