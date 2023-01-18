#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator- executes a function given on each element of an array
 * @action: is a pointer to the function you need to use
 * @size: is the size of the array
 * @array: pointer to integer
 * Return: nothing for success
 */
void array_iterator(int *array, size_t size, void (*action)(int n))
{
	int i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
