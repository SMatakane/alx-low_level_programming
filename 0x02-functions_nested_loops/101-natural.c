#include <stdio.h>
/**
 * natural - something
 * @n: size
 * Return: sum
 */
int natural(int n)
{
	int sum = 0;
	int i = 1;

	for (; i < n; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	return (sum);
}

/**
 * main - main
 * Return: 0
 */
int main(void)
{
	int n = 1024;

	printf("%d\n", natural(n));
	return (0);
}
