#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at nth index
 * @head: pointer to the list
 * @index: nth position
 * Return: 1 for success, -1 for fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempnode1;
	listint_t *tempnode2;
	unsigned int counter;

	counter = 0;
	tempnode1 = *head;
	if (index == 0)
	{
		*head = tempnode1->next;
		free(tempnode1);
		return (1);
	}
	if (*head != NULL)
	{
	for (tempnode1 = *head; tempnode1 != NULL; tempnode1 = tempnode1->next)
	{

		if (counter == (index - 1))
		{
			tempnode2 = tempnode1->next;
			tempnode1->next = tempnode2->next;
		}
		counter++;
	}
	free(tempnode2);
	return (1);
	}
	else
		return (-1);
}
