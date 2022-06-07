#include <stdio.h>

/**
 * print_alphabet - prints
 * Return: 0
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - times 10
 * Return: (0)
 */
void print_alphabet_x10(void);
/**
 * main - main
 * Return: 0
 */
int main(void)
{
	print_alphabet_x10();
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

/**
 * print_alphabet_x10 - times 10
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;

	for (; i < 10; i++)
		print_alphabet();
}
