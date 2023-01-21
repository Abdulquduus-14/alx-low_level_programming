#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @array: pointer to integer
 * @size: number of elements in the array array
 * @cmp: compares the given argument with array elements
 * Return: index of the first elementfor success, else -1
 */
int int_index(int *array, int size, int (*cmp)(int n))
{
	int i;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (size > 0)
	{
		for (i = 0; (*cmp)(array[i]) == 0; i++)
			(*cmp)(array[i]);
	}

	return (i);
}
