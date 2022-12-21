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
	int i;

	i = 0;
	while (*s != '\0')
	{
		while (!(s[i] >= 97 && s[i] < 123))
			i++;

		if (s[i - 1] == ',' || s[i - 1] == ';' ||
		s[i - 1] == '.' ||
		s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
		s[i - 1] == '(' || s[i - 1] == ')' ||
		s[i - 1] == '{' || s[i - 1] == '}' ||
		s[i - 1] == '\t' || s[i - 1] == '\n' ||
		s[i - 1] == ' ' || i == 0)
		{
			s[i] -= 32;
		}
		i++;
	}

	return (s);
}
