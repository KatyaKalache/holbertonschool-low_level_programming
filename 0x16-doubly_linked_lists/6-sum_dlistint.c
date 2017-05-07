#include "lists.h"
#include <stdlib.h>
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp_node;
	int sum = 0;

	temp_node = head;
	if (head == NULL)
		return (0);
	while (temp_node)
	{
		sum = sum + temp_node->n;
		temp_node = temp_node->next;
	}
	return (sum);
}
