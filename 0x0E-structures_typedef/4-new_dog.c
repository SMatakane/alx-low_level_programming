#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - more besties
 * @name: name
 * @age: age
 * @owner: me
 * Return: t_god
 */
dog_t *new_dog(char *name, float age, char *owner);
/**
 * _strlen - len
 * @str: charptr
 * Return: int
 */
int _strlen(char *str)
{
	int len = 0;
	while (*str++)
		len++;
	return (len);
}
/**
 * _strcopy - copy
 * @dest: dest
 * @src: src
 * Return: charptr
 */
char *_strcopy(char *dest, char *src)
{
	int idx = 0;

	for (; src[idx]; idx++)
		dest[idx] = src[idx];
	dest[idx] = '\0';
	return (dest);
}
/**
 * new - actual
 * @name: name
 * @age: age
 * @owner: me
 * Return: ptr
 */
dog_t *new(char *name, float age, char *owner)
{
	dog_t *doggo;


	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	doggo->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}

	doggo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}

	doggo->name = _strcopy(doggo->name, name);
	doggo->age = age;
	doggo->owner = _strcopy(doggo->owner, owner);

	return (doggo);
}
