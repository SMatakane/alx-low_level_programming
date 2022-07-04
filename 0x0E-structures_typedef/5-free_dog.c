#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - if you love something let it go
 * d: double
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
