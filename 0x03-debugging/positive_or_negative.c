#include "main.h"

/**
 * positive_or_negative - sign test
 * Return: pos, neg or zero
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
}
