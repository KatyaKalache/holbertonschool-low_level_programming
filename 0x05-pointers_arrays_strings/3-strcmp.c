#include "holberton.h"

/**
 * _strcmp - adding two lines together
 * @s1: first string
 * @s2: 2nd string
 * Return: nothing
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result;

	if (s1[i] != s2[i])
	{
		result = s1[i] - s2[i];
		i++;
		return (result);
	}
	else
		{
			return (0);
		}
}
