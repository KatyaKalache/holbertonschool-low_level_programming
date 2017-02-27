#include "holberton.h"
/**
 * _memcpy - copies memory area
 * @dest: where to copy to
 * @src: where copy from
 * @n: how many bytes to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
