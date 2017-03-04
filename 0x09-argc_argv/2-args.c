#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all arguments received
 * @argc: number of command entered
 * @argv: the array
 * Return: the string
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
