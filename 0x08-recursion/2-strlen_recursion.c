#include "main.h"
/**
 * _strlen_recursion: returns the length of a string.
 *
 * Return: returns the number of characters int he string
 * @s: string to find it's length
 */

int _strlen_recursion(char *s)
{
	int l;

	l = 0;
	if (!*s)
	{
		return (0);
	}
	if (*s)
	{
		l++;
		s++;
		return (l + _strlen_recursion(s));
	}
	_putchar('\n');

}
