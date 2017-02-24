#include "holberton.h"

/**
 * *leet - replasing
 * @s: value to check
 * Return: Always 0.
 */
char *leet(char *s)
{
	char a[] = "aeotlAEOTL";
	char b[] = "4307143071";
	int i;
	int j;

		for (i = 0; s[i] != '\0'; i++)
		{
			for (j = 0; a[j] != '\0'; j++)
			{
				if (s[i] == a[j])
				{
					s[i] = b[j];
				}
			}
		}
		return (s);
}
