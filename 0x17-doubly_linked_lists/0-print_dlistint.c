#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements
 *
 * @h: pointer to header
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodes;

	nodes = 0;
	if (h == NULL)
		return (nodes);
	while (h->prev != NULL)
		h = h->prev;
	for (; h != NULL; nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
