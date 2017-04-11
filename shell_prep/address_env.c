#include <stdio.h>

/**
 * main - prints the environment
 *
 * Return: Always 0.
 */
extern char **environ;
int main(int ac, char **av, char **envp)
{
	unsigned int i;
	/*
	i = 0;
	while (env[i] != NULL)
	{
		printf("%s\n", env[i]);
		i++;
	}
	printf("\n");
	printf("%p\n", *env);

	i = 0;


	while (environ[i] != NULL)
        {
		printf("%s\n", environ[i]);
                i++;

        }
	*/

//	printf("String: %s\n",env[0]);
//	printf("Address %p\n", env[0]);

	printf("envp: %p\n", envp[0]);
	printf("environ %p\n", environ[0]);
/*
        printf("\n");
	printf("%p\n", *environ);
*/
	return (0);
}
