#include <stdio.h>

/**
 * fib - fibonacci
 * @n: size
 * Return: 1 or fib(n)
 */
long int fib(int n)
{
	long int a = 1;
	long int b = 1;
	long int out = 0;
	int i = 0;

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
	int i = 1;

	for (; i <= n; i++)
		printf("%ld, ", fib(i));
	printf("%ld\n", fib(n));
	return (0);
}
