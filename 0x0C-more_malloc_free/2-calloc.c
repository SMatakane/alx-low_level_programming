#include "main.h"
#include <stdlib.h>
/**
 * _calloc - rtfm
 * @nmemb: int
 * @size: int
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *cptr;
	unsigned int idx;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(size * nmemb);
	if (mem == NULL)
		return (NULL);
	cptr = mem;
	for (idx = 0; idx < (size * nmemb); idx++)
		cptr[idx] = '\0';
	return (mem);
}
