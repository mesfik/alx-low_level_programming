#include "lists.h"

/**
 * free_dlistint - function to free the dlistint
 *
 * @head: head pointer
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while ((new = head) != NULL)
	{
		head = head->next;
		free(new);
	}
}

