#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	printf("$");
	while ((read = getline(&line, &len, stdin)) != -1)
	{
		printf("%s", line);
		return (len);
	}

	free(line);
	exit(EXIT_SUCCESS);
}
