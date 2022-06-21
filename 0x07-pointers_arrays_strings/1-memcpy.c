#include "main.h"

/**
 * _memcpy: copies mem to dest
 * @dest: destination
 * @src: source
 * @n: bytes to reserve
 * Return: char val
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = *(src + i);
	return (dest);
}
