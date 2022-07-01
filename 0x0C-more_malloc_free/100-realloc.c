#include "main.h"
#include <stdlib.h>
/**
 * _realloc - rellocates
 * @ptr: ptr
 * @old_size: old size
 * @new_size: new_size
 * Return: ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *cptr, *filler;
	unsigned int idx;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		mem = malloc(new_size);
		if (mem == NULL)
			return (NULL);
		return (mem);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	cptr = ptr;
	mem = malloc(sizeof(*cptr) * new_size);
	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}
	filler = mem;
	for (idx = 0; idx < old_size && idx < new_size; idx++)
		filler[idx] = *cptr++;
	free(ptr);
	return (mem);
}
