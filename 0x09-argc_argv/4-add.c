#include <stdio.h>
#include <stdlib.h>

/**
 * main - print sum of arguments received in command line
 * @argc: number of arguments
 * @argv: arguments
 * Return: sum of arguments
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= '0' && *argv[i] <= '9')
		{
			sum += (atoi(argv[i]));
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
