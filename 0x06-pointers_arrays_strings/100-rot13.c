#include "main.h"
/**
 * rot13: encodes a string using rot13 and returns
 * the new string
 *
 * Return: char *, to the new string
 * @s: char * parameter
 */

char *rot13(char *s)
{
	char *p;
	char *temp;

	p = s;
	while (*s != '\0')
	{
		temp = s;
		while ((*temp >= 65 && *temp < 78) ||
		(*temp >= 97 && *temp < 110))
		{
			*temp = *temp + 13;
			*temp++;
		}
		s = temp;

		if ((*s >= 78 && *s < 91) || (*s >= 110 && *s < 123))
			*s = *s - 3;

		s++;

	}
	return (p);
}
