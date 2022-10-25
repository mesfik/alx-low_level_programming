#include "lists.h"
/**
 * free_listint - function that frees a listint
 *
 * @head: pointer to the first node
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	free_listint(head->next);
	free(head);
}
