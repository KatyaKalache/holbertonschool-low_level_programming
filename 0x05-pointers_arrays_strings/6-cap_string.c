#include "holberton.h"

/**
 * cap_string - replacing lowcase after symbols w/ caps
 * @s: checking values
 * Return: result
 */
char *cap_string(char *s)
{
	int i = 0;
	int j;
	char a[] = {';', ' ', '\t', '\n', '.', '!', '?', '"', '(', ')', '{', '}'};

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= 32;
	}
	while (s[i] != '\0')
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if ((s[i] == a[j]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			{
				s[i + 1] = s[i + 1] -  32;
			}
		}
		i++;
	}
	return (s);
}
