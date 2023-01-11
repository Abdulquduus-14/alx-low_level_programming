#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


/**
 * alloc_grid: returns a pointer to a 2 dimensional array of integers.
 * @width: number of rows of array
 * @height: number of columns of the array
 *
 * Return: pointer to 2-dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **t;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);
	t = malloc(sizeof(**t) * width * height);
	if (!t)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			t[i][j] = 0;
		}
	}
	return (t);

}
