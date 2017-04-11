#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern char **environ;
char *_getenv(const char *name)
{
	char *token;
	char *match;


	match = malloc(sizeof(*name));

	while (*environ)
	{
		token = strtok(*environ, "=");
		while (token)
		{
			if (strcmp(name, token) == 0)
			{
				token = strtok(NULL, "=");
				match = strcpy(match, token);
			}
			token = strtok(NULL, "=");
		}
		environ++;
	}
	return (match);
}
int main (void)
{
	char *path;
	char *path_sep;

	path = _getenv("PATH");
	path_sep = strtok(path, ":");
	while (path != NULL)
	{
		path_sep = strtok(NULL, ":");
		printf("%s\n", path_sep);
	}
	return (0);
}
