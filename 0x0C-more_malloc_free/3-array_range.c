#include "main.h"
#include <stdlib.h>
/**
 * array_range - range of array
 * @min: min
 * @max: max
 * Return: int ptr
 */
int *array_range(int min, int max)
{
	int *arr;
	int idx, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	for (idx = 0l idx < size; idx++)
		arr[idx] = min++;
	return (arr);
}
