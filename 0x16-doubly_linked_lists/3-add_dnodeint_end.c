#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp_node;

	if (n == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	new_node->next = NULL;

	if (*head != NULL)
	{
		temp_node = *head;
		while (temp_node->next)
		{
			temp_node = temp_node->next;
		}
		temp_node->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
