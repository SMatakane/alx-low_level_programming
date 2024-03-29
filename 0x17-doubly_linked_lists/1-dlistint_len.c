#include "lists.h"

/**
 * dlistint_len - length of dlist
 * @h: head
 * Return: size
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
