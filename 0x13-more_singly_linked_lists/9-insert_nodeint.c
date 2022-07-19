#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at index lol
 * @head: head
 * @idx: index
 * @n: size
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *cpy;
	listint_t *node;

	if (head == NULL)
		return (NULL);

	node = (listint_t *)malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->next = NULL;
	node->n = n;

	if (idx == 0)
	{
		node->next = *head;
		(*head) = node;
		return (node);
	}

	cpy = *head;
	while (idx != 1)
	{
		cpy = cpy->next;
		--idx;

		if (cpy == NULL)
		{
			free(node);
			return (NULL);
		}
	}

	node->next = cpy->next;
	cpy->next = node;

	return (node);
}
