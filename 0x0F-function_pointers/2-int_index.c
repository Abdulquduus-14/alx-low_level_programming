#include "function_pointers.h"
/**
 * int_index- a function that searches for an integer.
 * @array: pointer to integer
 * @size: number of elements in the array array
 * @cmp: function does not return 0
 *
 * Return: returns the index of the first elementfor success, else -1
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
