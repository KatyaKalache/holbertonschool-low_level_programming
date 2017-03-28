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

	newnode = malloc(sizeof(listint_t));
	newnode->n = n;
	tempnode = *head;
	counter = 0;

	if (tempnode != NULL)
	{
		tempnode = tempnode->next;
		if(counter == idx)
		{
			return (newnode);
		}
		counter++;
	}
	newnode->next = tempnode->next;
	tempnode->next = newnode;
	return (newnode);
}
