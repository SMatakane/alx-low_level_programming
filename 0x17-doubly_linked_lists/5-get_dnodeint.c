#include "lists.h"

/**
 * get_dnodeint_at_index - as the name implies
 * @head: head
 * @index: idx
 * Return: addr/null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
