#include "main.h"
#include <stdlib.h>

/**
 * _strdup - something
 * @str: string input
 * Return: pointer to something
 */
char *_strdup(char *str)
{
	char *A;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
		return (NULL);
	for (; str[i] != '\0'; i++)
	{
	}

	A = (char *)malloc(sizeof(char) * (i + 1));
	if (A == NULL)
		return (NULL);
	for (; j <= i; j++)
		A[j] = str[j];
	return (A);
}
