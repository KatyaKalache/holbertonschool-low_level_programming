#include "holberton.h"

/**
 * _strncat - adding two lines together
 * @dest: first word
 * @src: 2nd word
 * @n: bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; j < n; i++, j++)
	{

		dest[i] = src[j];
	}

	return (dest);
}
