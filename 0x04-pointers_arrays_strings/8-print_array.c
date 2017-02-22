#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints values of array
 * @a: value to be checked
 * @n: number of elements of the array to print
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	putchar('\n');
}
