#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range: a function that creates an array of integers.
 * @min: array minimum value
 * @max: array maximum value
 *
 * Return: the pointer to the newly created array
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
	for (i = 0; i < size - 1; i++, min++)
	{
		*(p + i) = min;
	}
	return (p);
			      
}
