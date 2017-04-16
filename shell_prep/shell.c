#include "shell.h"
int main(void)
{
	char *line = NULL;
        size_t len = 0;
        ssize_t read;
	pid_t pid;
	int status;
	char **argv;
	char *token;
	char *delim = "\n\t\r\a ";
	char *line_copy;
	int i = 0;
	size_t word_count = 0;

	_putstring("$ ");
	while (read = getline(&line, &len, stdin) != EOF)
	{
		if (strcmp(line, "\n") == 0)
		{
			_putstring("$ ");
			continue;
		}
		if (!line)
		{
			printf("No line\n");
			_putstring("$ ");
		}

//start testing here
		line_copy = strdup(line);
		token = strtok(line_copy, delim);

		while (token)
		{
			word_count++;
			token = strtok(NULL, delim);
		}
		token = strtok(line, delim);
		argv = malloc(sizeof(char *) * word_count);
		while (token)
		{

			argv[i++] = token;
			token = strtok(NULL, delim);
		}
		argv[i] = NULL; /* set last element to null */
		free(line_copy);
		free (argv);
		i = 0;
		while (i < 1)
		{
			printf("argv: %s \n", argv[i]);
			i++;
		}
//end testing
		if (access(argv[0], X_OK) == 0)
		{
			pid = fork();
			if (pid == 0)
			{
//			printf("argv[0]: %s\n", argv[0]);
				/* TODO: TOKENIZE */

				execve("/bin/ls", argv, environ);
				_putstring("Command does not exist\n");
		}
			else if (pid < 0)
			{
				perror("Error\n");
				return (1);
			}
			else
			{
				wait(&status);
			}
		}
//	free(line);
	}
	free(line);
	return (EXIT_SUCCESS);
}
void _putstring(char *str)
{
	write(1, str, _strlen(str));
}
