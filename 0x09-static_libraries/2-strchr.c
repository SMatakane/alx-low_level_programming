#include <stddef.h>

/**
 * _strchr - something important
 * @s:char input
 * @c:char input
 * Return: char val
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
