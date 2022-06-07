#include "main.h"

/**
 * print_last_digit - prints last digit
 * @val: value
 * Return: last digit
 */
int print_last_digit(int val)
{
	val %= 10;
	if (val < 0)
		val = -val;
	_putchar(val + '0');
	return (val);
}
