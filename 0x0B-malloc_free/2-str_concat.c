#include "main.h"
#include <stdlib.h>

/**
 * str_concat - what strings do best
 * @s1: string 1
 * @s2: string 2
 * Return: char ptr
 */
char *str_concat(char *s1, char *s2)
{
	char *cptr;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;
	unsigned int upper;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (; s1[i] != '\0'; i++)
	{
	}
	for (; s2[j] != '\0'; j++)
	{
	}

	cptr = malloc(sizeof(char) * (i + j + 1));
	if (cptr == NULL)
	{
		free(cptr);
		return (NULL);
	}

	for (; k < i; k++)
		cptr[k] = s1[k];
	upper = j;
	for (j = 0; j <= upper; k++, j++)
		cptr[k] = s2[k];
	return (cptr);
}
