#include "main.h"

/**
 * print_last_digit - prints last digit
 * @val: value
 * Return: last digit
 */
int print_last_digit(int val)
{
	if (val < 0)
		val = -val;
	val %= 10;
	_putchar('0' + val);
	return (val);
}
