#include "main.h"
/**
 * _strstr:  locates a substring.
 *
 * Return: pointer to substring
 * @haystack: string to search
 * @needle: string to locate
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	char *s1, *s2;

	for (i = 0; haystack[i]; i++)
		s1 = &haystack[i];

	s2 = needle;
	while (*s2 && *s2 == *s1)
	{
		s1++;
		s2++;
	}
	
	return (s2);
}
