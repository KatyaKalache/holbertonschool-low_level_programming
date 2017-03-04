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
	int mul = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul = atoi(argv[1]) * atoi(argv[2]);
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
