#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of listint_t
 * @listint_t: the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodeNum;

	nodeNum = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodeNum++;
	}
	return (nodeNum);
}
