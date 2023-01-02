#include "main.h"
/**
 * _strchr:  locates a character in a string.
 *
 * Return: char * to new string
 * @s: string to search
 * @c: character to find
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		
		s++;
	}

	return (0);
}
