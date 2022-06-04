#include <stdio.h>

/**
 * main - Test sign
 * Return: 0
 */
int main(void)
{
	int x = '0';
	int y = '1';
	int z = '2';

	for (; x <= '7'; x++)
	{
		int temp_y = y;
		int temp_z = z;

		for (; temp_y <= '8'; temp_y++)
		{
			int temp = temp_z;

			for (; temp <= '9'; temp++)
			{
				putchar(x);
				putchar(temp_y);
				putchar(temp);
				if (x == '7' && temp_y == '8' && temp == '9')
					break;
				putchar(',');
				putchar(' ');
			}
			temp_z++;
		}
		y++;
	}
	putchar('\n');
	return (0);
}
