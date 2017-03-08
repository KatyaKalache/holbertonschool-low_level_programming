#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
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
 * str_concat - returns copies of 2 strings
 * @s1: first string
 * @s2: second string
 * Return: copy of both strings
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	char *copy1;
	char *copy2;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	copy1 = malloc(_strlen(s1) * sizeof(char) + 1);
	copy2 = malloc(_strlen(s2) * sizeof(char) + 1);

	for (i = 0; i <= _strlen(s1); i++)
	{
		copy1[i] = s1[i];
	}
	return (copy1);
	free(copy1);
	for (i = 0; i <= _strlen(s2); i++)
	{
		copy2[i] = s2[i];
	}
	return (copy2);
	free(copy2);
}
