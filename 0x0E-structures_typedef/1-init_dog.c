#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - fetch
 * d: dmx would be proud
 * name: chptr
 * age: in human years lol
 * owner: snoop
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
