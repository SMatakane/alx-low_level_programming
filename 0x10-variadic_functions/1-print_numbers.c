#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - main
 * @separator: sep
 * @n: size
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list units;
	unsigned int idx;

	va_start(units, n);
	for (idx = 0; idx < n; idx++)
	{
		printf("%d", va_arg(units, int));
		if (idx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(units);
}
