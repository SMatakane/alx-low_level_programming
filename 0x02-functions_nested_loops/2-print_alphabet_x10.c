#include "main.h"

/**
 * print_alphabet_x10 - times 10
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		char j = 'a';
		
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
	}
}
