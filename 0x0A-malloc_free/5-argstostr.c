#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments
 * @ac: argument count
 * @av: arguments passed
 * Return: pointer to a string or NULL
 */
char *argstostr(int ac, char **av)
{
	char *mem;
	unsigned int total;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	total = total_length(ac, av);
	mem = malloc(total * sizeof(char));
	copy_string(av, mem);
	return (mem);
}
/**
 * _strlen - getting str length of every argv
 * @s: the string
 * Return: str len
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * total_length - total length of all argv
 * @ac: counts argv
 * @av: arguments
 * Return: sum
 */
unsigned int total_length(int ac, char **av)
{
	int i;
	unsigned int sum;

	i = 0;
	sum = 0;
	while (av[i] != NULL)
	{
		sum = sum + _strlen(av[i]);
		i++;
	}
	sum = sum + ac + 1;
	return (sum);
}
/**
 * copy_string - concat strings
 * @av: arguments
 * @s: string
 * Return: str values
 */
void copy_string(char **av, char *s)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (av[i] != NULL)
	{
		from_to(av[i], s + k);
		k = k + _strlen(av[i]);
		s[k] = '\n';
		k++;
		i++;
	}
	s[k] = '\0';
}
/**
 * from_to - copies values
 * @origin: copy from
 * @dest: copy to
 * Return: nothing
 */
void from_to(char *origin, char *dest)
{
	int i;

	i = 0;
	while (origin[i] != '\0')
	{
		dest[i] = origin[i];
		i++;
	}
}
