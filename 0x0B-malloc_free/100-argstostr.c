#include "main.h"
#include <stdlib.h>

/**
 * argstostr - the robot uprising
 * @ac: count
 * @av: algebra class
 * Return: ptr
 */
char *argstostr(int ac, char **av)
{
	char *out;
	int c, i, j, a;

	if (ac == 0)
		return (NULL);
	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}
	a = malloc(sizeof(char) * (c + 1));

