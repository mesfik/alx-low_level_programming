#include "lists.h"
/**
 * print_listint - prints all the elements of listint
 *
 * @h: head of constant listint
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nOfnodes = 0;

	for (nOfnodes = 0; h; nOfnodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nOfnodes);
}
