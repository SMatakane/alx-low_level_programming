#include "main.h"

/**
 * _strlen - length of string recursed
 * @s: string input
 * Return: size as integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
