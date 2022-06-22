#include <math.h>

/**
 * _sqrt_recursion - recursion of sqrt, later implement newton method
 * @n: input
 * Return: integer out
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (sqrt(n, 1));
}
