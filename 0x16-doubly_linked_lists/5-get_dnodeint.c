#include "lists.h"
#include <stdlib.h>
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *temp_node;

	if (head == NULL)
		return (NULL);

	temp_node = head;
	while (temp_node)
	{
		if (counter == index)
		return (temp_node);
		temp_node = temp_node->next;
		counter++;
	}
	return (temp_node);
}
