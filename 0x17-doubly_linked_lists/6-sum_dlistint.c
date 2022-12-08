#include "lists.h"

/**
 * sum_dlistint - function to return the summ of all data
 *
 * @head: head pointer to the function
 *
 * Return: sum of all the data
 *         if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
