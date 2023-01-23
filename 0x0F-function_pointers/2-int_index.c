#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * int_index - a function that searches for an integer.
 * @array: pointer to integer
 * @size: number of elements in the array array
 * @cmp: compares the given argument with array elements
 * Return: index of the first elementfor success, else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ((array == NULL) || !cmp)
		return (-1);
	if (size > 0)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i] != 0))
				return (i);
	}

	return (-1);
}
