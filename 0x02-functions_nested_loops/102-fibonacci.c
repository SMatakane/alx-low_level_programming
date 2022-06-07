#include <stdio.h>

/**
 * fib - fibonacci
 * @n: size
 * Return: 1 or fib(n)
 */
int fib(int n)
{
	int a = 1;
	int b = 1;
	int out = 0;
	int i = 0;

	if (n == 0)
		return (1);
	for (; i < n; i++)
	{
		out = a + b;
		a = b;
		b = out;
	}
	return (a);
}

/**
 * main - main
 * Return: 0
 */
int main(void)
{
	int n = 50;
	int i = 0;

	for (; i < n; i++)
		printf("%d, ", fib(i));
	printf("%d\n", fib(n-1));
	return (0);
}
