#include "main.h"
#include <stdlib.h>

/**
 * create_array - as name implies
 * @size: size
 * @c: char input
 * Return: char ptr
 */
char *create_array(unsigned int size, char c)
{
	char *c_;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	c_ = malloc(sizeof(c) * size);

	if (c_ == NULL)
		return (NULL);
	for (; i < size; i++)
		c_[i] = c;
	return (c_);
}
