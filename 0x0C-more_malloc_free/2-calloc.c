#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * _calloc: a function that allocates memory for an array, using malloc.
 * @nmemb: number of elements to allocate memory for
 * @size: size of array
 *
 * Return: returns a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	p = 0;
	return (p);
}
