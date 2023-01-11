#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * _strdup: function that returns a pointer to a 
newly allocated space in memory
 * @str: string to duplicate
 *
 * Return: returns a pointer to a new string which 
is a duplicate of the string str
 */

char *_strdup(char *str)
{
	char *p;

	if (*str == NULL)
		return (NULL);

	while (*str)
	{
		p = malloc(sizeof(char *));
		if (!p)
			return (NULL);
		*p = *str;

		str++;
		p++;
	}
	return (p);
}
