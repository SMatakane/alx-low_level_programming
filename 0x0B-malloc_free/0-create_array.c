#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *c_;
	unsigned int i;

	if (size == 0)
		return NULL;
	c_ = malloc(sizeof(c) * size);

	if (c_ == NULL)
		return NULL;
	for (; i < size; i++)
		c_[i] = c;
	return (c_);
}
