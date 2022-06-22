#include "main.h"

/**
 * is_prime_number - check if prime
 * @n: integer input
 * Return: integer val
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (manual(n, 2));
}

/**
 * manual - manually computes and checks
 * @n: integer 
 * @i: integer
 * Return: integer
 */
int manual(int n, int i)
{
	if (n % i == 0)
		return (0);
	else if (n% i != 0 && i == (n - 1))
		return (1);
	return (manual(n, i + 1));
}
