#include "holberton.h"
#include <string.h>
#include <stdlib.h>
/**
 * strlen - finds string length
 * @s: the string
 * Return: the length
 */
int _strlen(const char *str)
{
	unsigned int i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}
/**
 * binary_to_uint - converts binary number to decimal
 * @b: binary number
 * Return: decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int power = 1;
	unsigned int i = 0;
	int len;
	unsigned int sum = 0;

	len = _strlen(b);

	for (i = len - 1; i > 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			sum = sum + b[i] * power;
		}
		if (b[i] != '0' || b[i] != '1')
		{
			return (0);
		}
	}
	return (sum);
}
