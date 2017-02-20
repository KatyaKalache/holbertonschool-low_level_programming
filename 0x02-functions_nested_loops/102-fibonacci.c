#include <stdio.h>

int main (void)
{
	unsigned long i = 1;
	unsigned long j = 2;
	int c;

	for (c = 0; c < 50; c++)
	{
		printf("%lu,%lu", i, j);
		i = i + j;
		j = j + i;
	}
	return (0);
}
