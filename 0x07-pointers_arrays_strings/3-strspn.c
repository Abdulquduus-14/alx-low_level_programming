#include "main.h"
/**
 * _strspn: gets the length of a prefix substring.
 * Return: unsigned int value
 * @s: char *
 * @accept: char *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	char *t;

	while (*accept != '\0')
	{
		t = s;
		while(*s != '\0')
			{
				if (*s == *accept)
					i++;
				s++;

			}
		s = t;
		accept++;
	}

	return (i);
}
