#include <stdlib.h>
#include <stdio.h>

/**
 * Main - Entry point
 *
 * Return - Always: 0 (Success)
 */
int main(void)
{
	char i = 'a';

	do {
		if (i == 'e')
		{
			i = i + 1;
			continue;
		}
		else if (i == 'q')
		{
			i = i + 1;
			continue;
		}
		putchar(i);
		i++;
	} while (i <= 'z');

	putchar('\n');
	return (0);
}
