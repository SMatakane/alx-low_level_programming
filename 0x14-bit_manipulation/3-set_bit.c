#include "main.h"
/**
 * set_bit - sets bit at index
 * @n: val
 * @index: idx
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);
	return (1);
}
