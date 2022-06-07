#include <stdio.h>

/**
 * print_alphabet - prints
 * Return: 0
 */
void print_alphabet(void);

/**
 * main - main
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - none
 * Return: 0
 */
void print_alphabet(void)
{
	int i = 'a';

	for (; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
}
