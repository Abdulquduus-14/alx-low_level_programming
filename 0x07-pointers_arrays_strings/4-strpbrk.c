#include "main.h"
/**
 * _strpbrk: searches a string for any of a set of bytes.
 *
 * Return: char * value
 * @s: char * parameter
 * @acccept: char *
 */

char *_strpbrk(char *s, char *accept)
{
	cha *t, *h;

	while (*s != '\0')
	{
		h = accept;
		while (*accept)
		{
			if (*s == *accept)
			{
				t = s;
				return (t);
			}
			accept++;
		}
		accept = h;
		s++;
	}
	return (0);
}
