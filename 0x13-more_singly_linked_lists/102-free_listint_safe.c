#include "lists.h"
#include <stdio.h>
/**
 * remove - deletes loop
 * @head: head
 * Return: void
 */
void remove(listint_t *head)
{
	listint_t *cpy =head;
	listint_t *init;
	size_t i;
	size_t count = 0;

	while (cpy)
	{
		count++;
		init = head;
		i = 0;

		while (i < count)
		{
			if (init == cpy->next)
			{
				cpy->next = NULL;
				return;
			}
			init = init->next;
			i++;
		}
		cpy = cpy->next;
	}
}
/**
 * free_listint_safe - frees safely
 * @h: head
 * Return: freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *cpy;
	size_t out = 0;

	remove(*h);

	while (h != NULL && *h != NULL)
	{
		out++;
		cpy = *h;
		*h = cpy->next;
		free(cpy);
	}
	return (out);
}
