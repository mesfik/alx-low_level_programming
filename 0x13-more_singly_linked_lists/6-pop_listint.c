#include "lists.h"
/**
 * pop_listint - function that deletes the head node
 *
 * @head: the head pointer of the function
 *
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	int headNode;
	listint_t *h;
	listint_t *currentNode;

	if (*head == NULL)
		return (0);
	currentNode = *head;
	headNode = currentNode->n;
	h = currentNode->next;
	free(currentNode);
	*head = h;
	return (headNode);
}
