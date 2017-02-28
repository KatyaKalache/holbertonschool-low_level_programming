#include "holberton.h"

/**
 * _strstr - locates a substring
 * @haystack:string to check
 * @needle: substring to be compared
 * Return: pointer to substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
			return (needle);
			}
		}
	}
	return (0);
}
