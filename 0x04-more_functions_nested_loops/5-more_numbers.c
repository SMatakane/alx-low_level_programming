#include "main.h"

/**
 * more_numbers - prints more numbers
 * Return: 0
 */
void more_numbers(void)
{
	int i = 0;
	int ten = 0;
	int unit = 0;

	for (; i < 10; i++)
	{
		int x = 0;

		while (x <= 14)
		{
			ten = (x / 10) % 10;
			unit = (x / 1) % 10;
			if (ten != 0)
				_putchar('0' + ten);
			_putchar('0' + unit);
			x++;
		}
		_putchar('\n');
	}
}

