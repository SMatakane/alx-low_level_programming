#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_char - prints char
 * @arg: argument
 * Return: void
 */
void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}
/**
 * print_int - prints integer
 * @arg: argument
 * Return: void
 */
void print_int(va_list arg)
{
	int units;

	units = va_arg(arg, int);
	printf("%d", units);
}
/**
 * print_float - prints double
 * @arg: argument
 * Return: void
 */
void print_float(va_list arg)
{
	float units;

	units = va_arg(arg, double);
	printf("%f", units);
}
/**
 * print_string - prints string
 * @arg: argument
 * Return: void
 */
void print_string(va_list arg)
{
	char *cptr;

	cptr = va_arg(arg, char *);
	if (cptr == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", cptr);
}
/**
 * print_all - prints all types
 * @format: format
 * Return: void
 */
void print_all(char * const format, ...)
{
	va_list args;
	int i = 0;
	int j = 0;
	char *sep = "";

	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);
	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", sep);
			funcs[j].print(args);
			sep = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
