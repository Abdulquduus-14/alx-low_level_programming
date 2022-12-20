#include "main.h"
/**
 * rev_string: reverses a string
 *
 * Return: void
 * @s: char *
 */

void rev_string(char *s)
{
	char *a;
	char *b;

	b = a;
	while (*s != '\0')
	{
		s++;
	}
	s--;
	while (*s)
	{
		*a = *s;
		s--;
		a++;
	}
	*a = '\0';
	s = b;

	_putchar('\n');
}
