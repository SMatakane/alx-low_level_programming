#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - main
 * @separator: sep
 * @n: size
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *cptr;
	unsigned int idx = 0;

	va_start(strings, n);
	for (; idx < n; idx++)
	{
		cptr = va_arg(strings, char *);
		if (cptr == NULL)
			printf("(nil)");
		else
			printf("%s", cptr);

		if (idx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
