#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct path_link
{
        char *token;
        struct path_link *next;
}link_t;
extern char **environ;
link_t *add_node_end(link_t **head, const char *token)
{
	link_t *temp;
	link_t *new_node;

	temp = *head;
	new_node = malloc(sizeof(link_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->token = strdup(token);
	new_node->next = NULL;
	if (*head != NULL)
	{
		while (temp->next != NULL)
		{
		temp = temp->next;
		}
		temp->next = new_node;
	}
	else
		*head = new_node;
	return (*head);
}
char *_getenv(const char *name)
{
	char *token;
	char *match;

	while (*environ)
	{
		token = strtok(*environ, "=");
		if (strcmp(name, token) == 0)
		{
			match = strtok(NULL, "\0");
			return(match);
		}
		environ++;
	}
}
link_t *path_tok(char *match)
{
	link_t *head = NULL;
	char *token;
	token = strtok(match, ":");

	while (token)
	{
		add_node_end(&head, token);
		token = strtok(NULL, ":");
	}
	return (head);
}
int main(void)
{
	link_t *head;
	char *match;

	match =	_getenv("PATH");
	head = path_tok(match);
	while (head != NULL)
	{
		printf("this is a node head->token %s\n", head->token);
		head = head->next;
	}
	return (0);
}
