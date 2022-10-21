#include "lists.h"
/**
 * list_len - return size of the linked list
 *
 * @h: linked lists of h
 *
 * Return: size of the linked list
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
