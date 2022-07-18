#include "lists.h"
/**
 * free_listint - frees ze list
 * @head: head
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
