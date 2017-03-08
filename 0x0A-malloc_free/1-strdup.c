#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns length of a string
 * @s: value to be checked
 * Return: length
 */
int _strlen(char *s)
{
	int l = 0;

while (*(s + l))
	l++;
return (l);
}
/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: copy of the string to be placed
 * Return: string
 */
char *_strdup(char *str)
{
	int i = 0;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	copy = malloc(_strlen(str) * sizeof(char));

	for (i = 0; i < _strlen(str); i++)
	{
		copy[i] = str[i];
	}
	copy[i] = '\0';
	return (copy);
	free(str);
}
