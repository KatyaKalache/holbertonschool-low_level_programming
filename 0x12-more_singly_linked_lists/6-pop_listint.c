#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes head node
 * @head: first element of the list
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *tempnode;

	if (*head == NULL)
	{
		return (0);
	}
	tempnode = *head;
	value = tempnode->n;
	*head = (*head)->next;
	free(tempnode);
	return (value);
}
