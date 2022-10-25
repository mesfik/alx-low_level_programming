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
	size_t a = 0;

	for (a = 0; h; a++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (a);
}
