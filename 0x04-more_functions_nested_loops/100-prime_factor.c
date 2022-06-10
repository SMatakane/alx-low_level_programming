#include <stdio.h>

/**
 * main - main
 * Return: 0
 */
int main(void)
{
	int max;
	int dividend = 2;
	long int n = 612852475143;

	while (n > 1)
	{
		if (n % dividend != 0)
			dividend += 1;
		else
		{
			max = n;
			n /= dividend;
			if (n == 1)
			{
				printf("%d\n", max);
				break;
			}
		}
	}
}
