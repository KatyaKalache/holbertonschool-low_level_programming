#include "holberton.h"
#include <string.h>
#include <stdlib.h>
/**
 * binary_to_uint - converts binary number to decimal
 * @b: binary number
 * Return: decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	unsigned int i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		decimal = decimal << 1;
		if (b[i] == '1')
		{
			decimal++;
		}
	}
	return (decimal);
}
