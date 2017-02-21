#include "holberton.h"

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
