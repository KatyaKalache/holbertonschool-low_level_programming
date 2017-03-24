#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_list - frees the list
 * @head: firat element of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *tempnode;

	tempnode = malloc(sizeof(list_t));
	if (head != NULL)
	tempnode = head;
	head = tempnode;
	free(tempnode);
	head = NULL;
}
