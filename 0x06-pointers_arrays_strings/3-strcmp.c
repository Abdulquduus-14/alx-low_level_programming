#include "main.h"
/**
 * _strcmp: compares two strings and returns an integer
 * to show equality, less than or greater than
 *
 * Return: int
 * @s1: char *
 * @s2: char *
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 < *s2)
			return (-15);
		else if (*s1 > *s2)
			return (15);
		else
			continue;
		s1++;
		s2++;
	}
	return (0);
}
