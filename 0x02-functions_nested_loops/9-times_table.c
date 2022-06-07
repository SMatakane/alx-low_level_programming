#include "main.h"

/**
 * times_table - table of tables
 * Return: 0
 */
void times_table(void)
{
	int row = 0;
	int val, hundred, ten, unit = 0;

	for (; row <= 9; row++)
	{
		int col = 0;

		for (; col <= 9; col++)
		{
			val = row * col;
			hundred = (val / 100) % 10;
			ten = (val / 10) % 10;
			unit = (val / 1) % 10;

			if (hundred != 0)
				_putchar('0' + hundred);
			if (ten != 0 || (hundred != 0 && ten == 0))
				_putchar('0' + ten);
			else
				_putchar(' ');
			_putchar('0' + unit);
			if (col != 10)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
