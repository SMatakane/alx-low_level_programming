#include <stdio.h>

/**
 * main - main
 * Return: 0
 */

int main(void)
{
	int n = 100;
	int i = 1;

	for (; i <= n; i++)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
