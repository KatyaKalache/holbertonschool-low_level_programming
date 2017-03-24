#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
size_t print_list(const list_t *h)
{
	size_t numberElements;

	numberElements = 0;
	while(h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		numberElements++;
	}
	return(numberElements);
}
