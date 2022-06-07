#include <stdio.h>

/**
 * jack_bauer - prototype
 * Return: 0
 */
void jack_bauer(void);

/**
 * main - main
 * Return: 0
 */
int main(void)
{
	jack_bauer();
	return (0);
}

/**
 * jack_bauer - monday blues
 * Return: slow clock
 */
void jack_bauer(void)
{
	int unit, ten, hundred, thousand, clock = 0;

	while (clock != 2400)
	{
		unit = (clock / 1) % 10;
		ten = (clock / 60) % 10;
		hundred = (clock / 100) % 4;
		thousand = (clock / 1000) % 3;

		putchar('0' + thousand);
		putchar('0' + hundred);
		putchar(':');
		putchar('0' + ten);
		putchar('0' + unit);
		putchar('\n');
		clock++;
	}
}
