#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_dnodeint_at_index - deletes a node at index
 * @head: head of the list
 * @index: delete at this index
 * Return: 1 for sucess, -1 for failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp1;
	dlistint_t *temp2;
	unsigned int counter = 0;

	temp1 = *head;
	if (temp1 != NULL && index == 0)
	{
		*head = temp1->next;
		free(temp1);
		return (1);
	}
	while (temp1 != NULL)
	{
		if (counter == (index - 1))
		{
			temp2 = temp1->next;
			if (temp2 != NULL)
			{
				temp1->next = temp2->next;
				free(temp2);
				return (1);
			}
		}
		counter++;
		temp1 = temp1->next;
	}

	return (-1);
}
