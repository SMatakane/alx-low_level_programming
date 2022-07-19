#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - prints list
 * @head: head
 * Return: list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *cpy = head;
	const listint_t *init;

	size_t count = 0;
	size_t i;

	while (cpy)
	{
		printf("[%p] %d\n", (void *)cpy, cpy->n);
		count++;
		cpy = cpy->next;
		init = head;
		i = 0;

		while (i < count)
		{
			if (init != cpy)
			{
				init = init->next;
				i++;
			}
			else
			{
				printf("-> [%p] %d\n", (void*)init, init->n);
				return (count);
			}
		}
	}
	return (count);
}
