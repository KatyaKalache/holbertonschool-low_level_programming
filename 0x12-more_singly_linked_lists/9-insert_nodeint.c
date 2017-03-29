#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at nth position
 * @head: pointer to the list
 * @idx: position of an element of the list
 * @n: value
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tempnode;
	listint_t *newnode;
	unsigned int counter;

	tempnode = *head;
	counter = 0;
	while (tempnode && (counter < idx - 1))
	{
		tempnode = tempnode->next;
		counter++;
	}
	if (tempnode || (counter == idx - 1) || idx == 0)
	{
		newnode = malloc(sizeof(listint_t));
		if (newnode)
		{
			newnode->n = n;
			if (idx == 0)
			{
				newnode->next = *head;
				*head = newnode;
			}
			else
			{
			newnode->next = tempnode->next;
			tempnode->next = newnode;
			}
		return (newnode);
		}
	}
	return (NULL);
}
