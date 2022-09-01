#include "lists.h"

/**
 * print_dlistint - prints elems
 * @h: head
 * Return: size
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
