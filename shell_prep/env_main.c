#include <stdio.h>
#include <unistd.h>
/**
 * main - prints the environment
 *
 * Return: Always 0.
 */
extern char **environ;
int main(int ac, char **av, char **env)
{
	unsigned int i = 0;

	while (env[i] != NULL)
	{
		printf("%s\n", env[i]);
		i++;
	}
	return (0);
}
