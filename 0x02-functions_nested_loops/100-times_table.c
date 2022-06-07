#include "main.h"

/**
 * print_times_table - table of tables
 * @n: size
 * Return: 0
 */
void print_times_table(int n)
{
	if (n > 0 && n < 15)
	{
		int row = 0;
		int val, ten, unit = 0;

		for (; row <= n; row++)
		{
			int col = 0;

			for (; col <= n; col++)
			{
				val = row * col;
				ten = (val / 10) % 10;
				unit = (val / 1) % 10;

				if (ten == 0 && col != 0)
					_putchar(' ');
				if (ten != 0)
					_putchar('0' + ten);
				_putchar('0' + unit);
				if (col != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('0');
		_putchar('\n');
	}
}
