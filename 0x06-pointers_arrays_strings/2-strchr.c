#include "holberton.h"

/**
 * _strchr - locates a char in a string
 * @s: the string
 * @c: character to be located
 * Return: pointers to first occurrence or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return &(s[i]);
		}
		if (s[i] == '\0')
		{
			return (s);
		}
	}
	return (0);
}
