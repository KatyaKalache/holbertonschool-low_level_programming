#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - reverses a list
 * @head: pointer to list
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tempnode;
	listint_t *newnode;

	tempnode = NULL;

	while (*head != NULL)
	{
		newnode = (*head)->next;
		(*head)->next = tempnode;
		tempnode = *head;
		*head = newnode;
	}
	*head = tempnode;
	return (*head);
}
