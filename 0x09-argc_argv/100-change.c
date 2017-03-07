#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns number of chage
 * @argc: number of arguments
 * @argv: number passed
 * Return: 0
 */
int main(int argc, char **argv)
{
	int num;
	int change = 0;
	int q = 25;
	int d = 10;
	int n = 5;
	int t = 2;
	int p = 1;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	while (num > 0)
	{
		if (num >= 25)
		{
			num  -= q;
		}
		else if (num >= 10)
		{
			num  -= d;
		}
		else if (num >= 5)
		{
			num  -= n;
		}
		else if (num >= 2)
		{
			num  -= t;
		}
		else
		{
			num  -= p;
		}
		change++;
	}
	printf("%d\n", change);
	return (0);
}
