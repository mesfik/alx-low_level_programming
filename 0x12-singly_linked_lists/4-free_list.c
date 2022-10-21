#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a linked list
 *
 * @head: list to be free
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *prom;

	while (head)
	{
		prom = head->next;
		free(head->str);
		free(head);
		head = prom;
	}
}
