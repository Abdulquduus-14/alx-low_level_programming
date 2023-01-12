#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range: a function that creates an array of integers.
 * @min: minimum number in the array
 * @max: maximum number in the array
 *
 * Return: pointer to integer array
 */

int *array_range(int min, int max)
{
	int i, size;
	int *p;

	size = max - min;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(*p) * size);
	if (!p)
		return (NULL);

	for (i = 0; i < size; i++)
	{
	}
}
