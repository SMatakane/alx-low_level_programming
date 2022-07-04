#include <stdio.h>

/**
 * fib - fibonacci
 * @n: size
 * Return: 1 or fib(n)
 */
unsigned long int fib(int n)
{
	unsigned long int a = 1;
	unsigned long int b = 1;
	unsigned long int out = 0;
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
	int n = 98;
	int i = 1;

	for (; i < n - 7; i++)
		printf("%lu, ", fib(i));
	for (i = n - 7, i <= n;i++)
		//edit later
	printf("%lu\n", fib(n));
	return (0);
}
