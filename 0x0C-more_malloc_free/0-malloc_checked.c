#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - checks and exits
 * @b: integer input
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);
	return (mem);
}
