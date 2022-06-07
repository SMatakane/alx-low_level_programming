#include "main.h"

/**
 * times_table - table of tables
 * Return: 0
 */
void times_table(void)
{
	int row = 0;
	int val, ten, unit = 0;

	for (; row <= 9; row++)
	{
		int col = 0;

		for (; col <= 9; col++)
		{
			val = row * col;
			ten = (val / 10) % 10;
			unit = (val / 1) % 10;

			if (ten != 0)
				_putchar('0' + ten);
			_putchar('0' + unit);
			if ( ten == 0)
				_putchar(' ');
			if (col != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
