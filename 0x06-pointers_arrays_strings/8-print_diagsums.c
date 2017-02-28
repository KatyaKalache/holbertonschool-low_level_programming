#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals
 * @a: array
 * @size: size of int
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (a[i] == a[j])
			{
				sum = a[i] + a[i];
				printf("%d\n", sum);
			}
		}
	}
}
