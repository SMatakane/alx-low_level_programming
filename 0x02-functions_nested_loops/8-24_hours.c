#include "main.h"

/**
 * jack_bauer - 24 stuff
 * Return: 0
 */
void jack_bauer(void)
{
	int A = 0;
	int thousand, hundred, ten, unit;

	for (; A < 24; A++)
	{
		int B  = 0;

		for (; B < 60; B++)
		{
			thousand = (A / 10) % 10;
			hundred = (A / 1) % 10;
			ten = (B / 10) % 10;
			unit = (B / 1) % 10;

			_putchar('0' + thousand);
			_putchar('0' + hundred);
			_putchar(':');
			_putchar('0' + ten);
			_putchar('0' + unit);
			_putchar('\n');
		}
	}
}
