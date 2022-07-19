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

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
