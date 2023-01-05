#include "main.h"
/**
 * wildcmp:  compares two strings and the second string may
 * contain the '*' character which can replace any character
 * or string in the first string
 *
 * Rturn: returns 1 if the strings can be considered identical, 
 * otherwise 0
 * @s1: first string
 * @s2: second string
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 = *s2 == '\0')
		return (1);
	if (*s1)
	{
		if (*s2 == '*')
			*s2 = *s1;
		s1++;
		s2++;
		wildcmp(s1, s2);
	}

	if (s1 == s2)
		return (1);
	else
		return (0);

	_putchar('\0');
}
