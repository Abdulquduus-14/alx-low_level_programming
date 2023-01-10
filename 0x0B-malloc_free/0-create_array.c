#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array: a function that creates an array of chars,
  and initializes it with a specific char.
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

	while (i < size)
	{
		p = malloc(sizeof(char *));

		if (!p)
			return (NULL);
		else
		{
			*p = c;
		}
		i++;
	}
	return (p);
}
