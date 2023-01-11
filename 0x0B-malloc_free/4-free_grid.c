#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid: function that frees a 2 dimensional grid previously created
 * @grid: the address of the two dimensional grid
 * @height: number of columns
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (; height >= 0; height--)
	{
		free(grid[height]);
	}

}
