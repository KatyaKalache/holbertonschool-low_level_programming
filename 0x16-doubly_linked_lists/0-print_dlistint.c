#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
size_t  print_dlistint(const dlistint_t *h)
{
	size_t numberElements = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numberElements++;
	}
	return (numberElements);
}
