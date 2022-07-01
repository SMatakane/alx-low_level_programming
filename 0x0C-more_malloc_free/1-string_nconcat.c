#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - usual
 * @s1: string 1
 * @s2: string 2
 * @n: integer size
 * Return: char ptr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cptr;
	unsigned int len = n;
	unsigned int idx;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (idx = 0; s1[idx]; idx++)
		len++;
	cptr = malloc(sizeof(char) * (len + 1));
	if (cptr == NULL)
		return (NULL);

	len = 0;
	for (idx = 0; s1[idx]; idx++)
		cptr[len++] = s1[idx];
	for (idx = 0; s2[idx] && idx < n; idx++)
		cptr[len++] = s2[idx];
	cptr[len] = '\0';
	return (cptr);
}
