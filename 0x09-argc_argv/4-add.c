#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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


	for (i = 0; i <= argc; i++)
	{

		if (isdigit(atoi(argv[i])))
		{
			sum += (atoi(argv[i]));
			printf("%d\n", sum);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	return (0);
}
