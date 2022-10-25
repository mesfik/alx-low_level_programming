#include "lists.h"
/**
 * *get_nodeint_at_index - function that returns the nth node of a listint
 *
 * @head: the head pointer
 * @index: is the index of the node, starting at 0
 *
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
