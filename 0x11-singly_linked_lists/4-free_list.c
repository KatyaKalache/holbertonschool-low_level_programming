#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - frees the list
 * @head: firat element of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *tempnode;

	while (head)
	{
	tempnode = head->next;
	free(head);
	head = tempnode;
	}
}
