#include "variadic_functions.h"
/**
 * sum_them_all - main
 * @n: const size
 * Return: int sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list units;
	unsigned int idx = 0;
	unsigned int sum = 0;

	va_start(units, n);
	for (; idx < n; idx++)
		sum += va_arg(units, int);
	va_end(units);
	return (sum);
}
