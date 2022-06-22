#include <math.h>

/**
 * _eval - does the mathy stuff
 * @i: input
 * @n: input
 * Return: evaluation
 */
int _eval(int i, int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (i * i < n)
		return (_eval(i + 1, n));
	else if (i * i == n)
		return (i);
	return (-1);
}

/**
 * _sqrt_recursion - recursion of sqrt, later implement newton method
 * @n: input
 * Return: integer out
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
		return (-1);
	else
		return (_eval(i, n));
}
