#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: zero for success
 */
int main(void)
{
	unsigned long i = 1;
	unsigned long j = 2;
	int c;

	for (c = 0; c <= 24; c++)
	{

		printf("%lu, %lu", i, j);
		i = i + j;
		j = j + i;
		if (c < 24)
			printf(", ");
		else
			printf("\n");

	}
	return (0);
}
