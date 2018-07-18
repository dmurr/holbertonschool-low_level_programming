#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees 2D array from memory
 * @grid: 2D array
 * @height: height of array
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
