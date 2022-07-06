#include "function_pointers.h"
/**
 * array_iterator - as the name implies
 * @array: int ptr
 * @size: size_t
 * @action: film
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
