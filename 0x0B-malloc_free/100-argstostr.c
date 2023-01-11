#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr: function that concatenates all the arguments of your program.
 * @ac: int parameter
 * @av: array of pointer to characters
 *
 * Return: returns a pointer to a new string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	char *p;
	int i, j;

	i = 0;
	j = 0;


	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		p = malloc(sizeof(*p));
		if (!p)
			return (NULL);
		while (av[i])
		{
			*p = *av[j];
			j++;
		}
		i++;

	}
	return (p);
}
