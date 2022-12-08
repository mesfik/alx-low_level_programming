#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 *
 * @h: a pointer to header
 *
 * Return: number of element
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nodes;

	nodes = 0;
	if (h == NULL)
		return (nodes);
	while (h->prev != NULL)
		h = h->prev;
	for (; h != NULL; nodes++)
	{
		h = h->next;
	}
	return (nodes);
}
