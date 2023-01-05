#include "main.h"
/**
 * _puts_recursion: prints a string, followed by a new line.
 *
 * Return: void
 * @s: char * parameter
 */

void _puts_recursion(char *s)
{
	if (!*s)
	{
		return;
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	_putchar('\n');
}
