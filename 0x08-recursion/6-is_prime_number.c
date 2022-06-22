#include "main.h"

/**
 * _eval - evaluates
 * @num: integer input
 * @iter: iterations
 * Return: integer out
 */
int _eval(int num, int iter)
{
	if (iter == num - 1)
		return (1);
	else if (num % iter == 0)
		return (0);
	if (num % iter != 0)
		return (_eval(num, iter + 1));
	return (0);
}

/**
 * is_prime_number - math nerd stuff
 * @num: integer val
 * Return: if true 1 else 0
 */
int is_prime_number(int num)
{
	int iter = 2;

	if (num < 2)
		return (0);
	if (num == 2)
		return (1);
	return (_eval(num, iter));
}
