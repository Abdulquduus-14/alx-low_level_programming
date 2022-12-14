#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat: function that concatenates two strings.
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: combined string formed
 */

char *str_concat(char *s1, char *s2)
{
	char *p;


	if (s1 == NULL)
		*s1 = '\0';
	if (s2 == NULL)
		*s2 = '\0';
	while (*s1)
	{
		p = malloc(sizeof(*p));
		if (!p)
			return (NULL);
		*p = *s1;
		s1++;
		
	}
	while (*s2)
	{
		p = malloc(sizeof(*p));
		if (!p)
			return (NULL);
		*p = *s2;
		s2++;
		
	}
	*p = '\0';
	return (p);
}
