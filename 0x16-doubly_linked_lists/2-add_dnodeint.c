#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_dnodeint - adds new node at the begining
 * @head: head of the list
 * @n: number passed
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
	free(new_node);
}
