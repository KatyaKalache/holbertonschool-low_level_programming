#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns the number of elements in a linked list
 * @listint_t: the list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t numElements;

	numElements = 0;
	while (h != NULL)
	{
		numElements++;
		h = h->next;
	}
		return (numElements);
}
