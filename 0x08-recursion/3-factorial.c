#include "main.h"
/**
 * factorial - nerd stuff
 * @n: val input
 * Return: integer output
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * (factorial(n - 1)));
}
