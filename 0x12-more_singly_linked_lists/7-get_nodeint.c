#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node of a list
 * @index: index of a node
 * @head: pointer to the list
 * Return: a node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;
	listint_t *tempnode;

	counter = 0;
	tempnode = head;
	for (tempnode = head; tempnode != NULL;  tempnode = tempnode->next)
	{
		if (counter == index)
		{
			return (tempnode);
		}
		counter++;
	}
	return (tempnode);
}
