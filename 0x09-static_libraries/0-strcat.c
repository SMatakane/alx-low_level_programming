#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates
 * @dest: dest
 * @src: src
 * Return char
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dest_l, src_l;

	dest_l = strlen(dest);
	src_l = strlen(src);
	for (; i < src_l + 1; ++i)
	{
		dest[dest_l + i] = src[i];
	}
	return (dest);
}
