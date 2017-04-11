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
/* pointer to the next token */
			token = strtok(NULL, "=");
		}
		environ++;
	}
	return (match);
}
int main (void)
{
	char *home;
	home = _getenv("PATH");
	printf("%s\n", home);
	return (0);
}
