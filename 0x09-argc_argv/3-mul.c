#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all arguments received
 * @argc: number of command entered
 * @argv: the array
 * Return: the string
 */
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
		return (0);
}
