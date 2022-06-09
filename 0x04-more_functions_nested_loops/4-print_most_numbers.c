#include "main.h"
/**
 * print_most_numbers - prints letters
 * Return: 0
 */
void print_most_numbers(void)
{
	char i = '0';

	for (; i <= '9'; i++)
	{
		if (i != '4' && i != '2')
			_putchar(i);
	}
	_putchar('\n');
}
