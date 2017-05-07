#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
size_t dlistint_len(const dlistint_t *h)
{
	size_t numberElements = 0;

	while (h != NULL)
	{
		numberElements++;
		h = h->next;
	}
	return(numberElements);
}
