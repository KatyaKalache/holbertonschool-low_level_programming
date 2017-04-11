#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void  main(int ac, char **av)
{
	char *token;
	int i;

	for (i = 0; i < ac; i++)
	{
		token = strtok(av[i], " ");
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}
}
