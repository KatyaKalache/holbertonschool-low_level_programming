#include <stdlib.h>
#include <stdio.h>

/**
 * main - returns number of commands entered
 * @argc: number of command entered
 * @argv: arguments entered
 * Return: number of commands in prompt
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	int i = argc - 1;

	printf("%d\n", i);
	return (0);
}
