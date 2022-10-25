#include "lists.h"
/**
 * listint_len - function that returns number of element in linked
 *
 * @h: linked list to print
 *
 * Return: the number of element
 */
size_t listint_len(const listint_t *h)
{
	size_t a;

	for (a = 0; h; a++)
		h = h->next;
	return (a);
}
