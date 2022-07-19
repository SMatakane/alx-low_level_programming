#include "lists.h"
/**
 * find_listint_loop - find loop
 * @head: head
 * Return: location
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *cpy;
	listint_t *init;
	size_t i;
	size_t out;

	out = 0;
	cpy = head;

	while (cpy)
	{
		out++;
		cpy = cpy->next;
		init = head;
		i = 0;

		while (i < out)
		{
			if (init != cpy)
			{
				init = init->next;
				i++;
			}
			else
				return (init);
		}
	}
	return (NULL);
}
