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
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (!new_node)
	{
		return (NULL);
	}
	if (head == NULL)
	{
		return (NULL);
	}
	if (*head != NULL)
	{
		temp_node = *head;
		while (temp_node->next != NULL)
		{
			temp_node = temp_node->next;
		}
		temp_node->next = new_node;
		new_node->prev = temp_node;
		new_node->next = NULL;
	}
	else
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
	}
	return (new_node);
}
