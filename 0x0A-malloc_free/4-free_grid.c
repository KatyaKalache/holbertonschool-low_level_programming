#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free the grid
 * @grid: to free
 * @height: size to check
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;
	for (i = 0; i < height; i++)
	{
		free(grid);
	}
}
