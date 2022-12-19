#include "main.h"
/**
 * _strlen: returns the length of a string
 *
 * Return: returns string length
 * @s: char pointer to string
 */

int _strlen(char *s)
{
	int l;

	l = 0;
	while (*s != '\0')
	{
		l++;
		s++;
	}

	return (l);
}
