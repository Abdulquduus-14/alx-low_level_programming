#include "main.h"
/**
 * print_rev: a function that prints a string, in reverse,
 * followed by a new line.
 *
 * Return: void
 * @s: string to reversely print
 */

void print_rev(char *s)
{
	while (*s != '\0')
	{
		s++;
	}

	s--;
	while (*s)
	{
		_putchar(s);
		s--;
	}

	_putchar('\0');

}
