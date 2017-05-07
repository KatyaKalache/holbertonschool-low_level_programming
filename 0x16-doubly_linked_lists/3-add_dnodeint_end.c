#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_dnodeint_end - adds node at the end of the list
 * @head: head of the list
 * @n: number passed
 * Return: new node at the index
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	if (!n)
	{
		return (NULL);
	}
	new_node->next = NULL;

	if (*head != NULL)
	{
		temp_node = *head;
		while (temp_node->next)
		{
			temp_node = temp_node->next;
			new_node->prev = temp_node;
			new_node->next = NULL;
		}
		temp_node->next = new_node;
	}
	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	return (new_node);
}
