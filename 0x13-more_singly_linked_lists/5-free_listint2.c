#include "lists.h"
/**
 * free_listint2 - function that frees listint
 *
 * @head: head pointer of likedlist
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *currentNode;

	if (head != NULL)
	{
		currentNode = *head;
		while ((temp = currentNode) != NULL)
		{
			currentNode = currentNode->next;
			free(temp);
		}
		*head = NULL;
	}
}
