#include "lists.h"
/**
 * *add_nodeint_end - function that adds a new node at the end of a listint
 *
 * @head: head of the linked list
 * @n: entry point n
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *currentNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	currentNode = *head;
	while (currentNode->next != NULL)
		currentNode = currentNode->next;
	currentNode->next = newNode;
	return (*head);
}
