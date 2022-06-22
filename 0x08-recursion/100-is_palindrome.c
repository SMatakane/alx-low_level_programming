#include "main.h"

/**
 * _strlen_recursion - len of string
 * @s: string
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	if (!(*s))
		return (0);
	return (1 + _strlen_recursion(s++));
}

/**
 * p_helper - some helper function
 * @s: string
 * @pos: position
 * Return: 1 or 0 accordingly
 */
int p_helper(char *s, int pos)
{
	if (pos < 1)
		return (1);
	if (*s == *(s + 1))
		return (p_helper(s + 1, pos - 2));
	return (0);
}

/**
 * is_palindrome - check if palindrome
 * @s: string
 * Return: integer
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (p_helper(s, len - 1));/* is that my stack crying? */
}
