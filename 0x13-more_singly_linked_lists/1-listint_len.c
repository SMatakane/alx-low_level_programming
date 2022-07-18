#include "lists.h"
#include <stdio.h>
/**
 * listint_len - gets size of list
 * @h: ptr to head
 * Return: size as size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
