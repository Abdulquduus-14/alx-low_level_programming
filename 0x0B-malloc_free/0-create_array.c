#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array: a function that creates an array of chars
 * @size : number of characters
 * @c: character value to input
 *
 * Return: pointer to the new string
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	i = 0;
	if (size == 0)
		return (NULL);
	p = malloc(sizeof(*p) * size);

	if (!p)
		return (NULL);

	while (i < size)
	{
		*p = c;
		i++;
		
	}
	return (p);
}
