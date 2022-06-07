#include <stdio.h>

/**
 * _isupper - upper case check
 * @c: character
 * Return: bool
 */
int _isalpha(int c);

/**
 * main - main
 * Return: 0
 */
int main(void)
{
	int r;

	r = _isalpha('H');
	putchar(r + '0');
	r = _isalpha('o');
	putchar(r + '0');
	r = _isalpha(108);
	putchar(r + '0');
	r = _isalpha(';');
	putchar(r + '0');
	putchar('\n');
	return (0);
}

/**
 * _isalpha - main
 * @c: char
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
