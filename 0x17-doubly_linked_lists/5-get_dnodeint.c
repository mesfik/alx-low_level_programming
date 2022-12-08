#include "lists.h"

/**
 * get_dnodeint_at_index -  function that returns the nth node
 *
 * @head: haed pointer to the function
 * @index: index of listint node
 *
 * Return: the nth node of a dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	for (i = 0; head != NULL; i++)
	{
		if (i == index)
			break;
		head = head->next;
	}
	return (head);
}

