#include "ain.h"
/**
 * cap_string: capitalizes all words of a string.
 * and returns the new string
 *
 * return: char * to the new string
 * @s: char * parameter
 */

char *cap_string(char *s)
{
	char *a;

	a = s;
	while (*s != '\0')
	{
		if (*s == ',' || *s == ';' || *s == '.' || *s == '!' ||
		*s == '?' || *s == '"' || *s == '(' || *s == ')' ||
		*s == '{' || *s == '}' || *s == '\t' || *s == '\n' ||
		*s == ' ')
		{
			s++;
			if (*s >= 97 && *s < 123)
				*s = *s - 32;
		}
		s++;
	}

	return (a);
}
