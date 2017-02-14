#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int d;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (d = 0; d <= 9; d++)
			{
				if (i >= j || j >= d)
				{ continue; }
			putchar(i + '0');
			putchar(j + '0');
			putchar(d + '0');
			if (i == 7)
			{ break; }
			putchar(',');
			putchar(' ');
		}
	}
	}
	putchar('\n');
	return (0);
}
