#include "holberton.h"

/**
 * _strncpy - adding two lines together
 * @dest: first word
 * @src: 2nd word
 * @n: bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	for (; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
