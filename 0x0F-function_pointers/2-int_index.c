#include "function_pointers.h"
/**
 * int_index - main
 * @array: arr
 * @size: size
 * @cmp: compare
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int idx;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (idx = 0; idx < size; idx++)
	{
		if (cmp(array[idx]) != 0)
			return (idx);
	}
	return (-1);
}
