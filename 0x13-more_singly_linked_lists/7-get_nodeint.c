#include "lists.h"
/**
 * get_nodeint_at_index - get info on node at index
 * @head: head
 * @index: index
 * Return: info
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;

	if (head == NULL)
		return (0);

	current = head;
	while (index != 0)
	{
		current = current->next;
		index--;
		if (current == NULL)
			return (0);
	}
	return (current);
}
