#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * list_len - returns the number of element of the list
 * @h: number of nodes
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t counter;

	counter = 0;
	while (h != NULL)
	{
		counter++;
	h = h->next;
	}
	return (counter);
}
