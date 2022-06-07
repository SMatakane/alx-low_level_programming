#include <stdio.h>

/**
 * print_last_digit - prototype
 * @val: value
 * Return: last digit
 */
int print_last_digit(int val);

/**
 * main - main
 * Return: 0
 */
int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	putchar('0' + r);
	putchar('\n');
	return (0);
}

/**
 * print_last_digit - prints last digit
 * @val: value
 * Return: last digit
 */
int print_last_digit(int val)
{
	if (val < 0)
		val *= -1;
	val %= 10;
	putchar('0' + val);
	return (val);
}
