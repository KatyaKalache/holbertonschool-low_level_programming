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
	int e;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (d = 0; d <= 9; d++)
			{
				for (e = 0; e <= 9; e++)
				{
					if (d < i || d < j || e < j)
					{ continue; }
					else if (i == d && j == e)
					{ continue; }
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(d + '0');
					putchar(e + '0');
					if (i == 9 && j == 8 && d == 9 && e == 9)
					{ break; }
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
