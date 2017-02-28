#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be checked
 * @accept: only count that
 * Return: number of bytes of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
}
	return (i);
}
