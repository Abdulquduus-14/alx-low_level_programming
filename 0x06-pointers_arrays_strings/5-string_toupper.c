#include "main.h"
/**
 * string_toupper:  changes all lowercase letters of a string to uppercase.
 *
 * Return: char * type
 * @s: char * parameter
 */

char *string_toupper(char *s)
{
	char *a;

	a = s;
	while (*s != '\0')
	{
		if ((*s >= 97) && (*s < 123))
			*s = *s - 32;
		s++;
	}
	return (a);

}
