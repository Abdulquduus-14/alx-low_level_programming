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
	a--;
	while (*a)
		a--;
	s = a;

	_putchar('\n');
}
