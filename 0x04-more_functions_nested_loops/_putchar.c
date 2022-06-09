#include <unistd.h>

/**
 * _putchar - char things
 * @c: char input
 * Return: 1 else 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
