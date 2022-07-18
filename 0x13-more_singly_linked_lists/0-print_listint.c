#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints list
 * @h: ptr to node
 * Return: size_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		nodes++;
	}
	return (nodes);
}
