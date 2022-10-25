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

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nOfnodes++;
	}
	return (nOfnodes);
}
