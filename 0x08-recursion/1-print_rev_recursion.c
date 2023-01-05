#include "main.h"
/**
 * _print_rev_recursion:  prints a string given as
 * argument to it in reverse.
 *
 * Return: void
 * @s: string to reverse
 */

void _print_rev_recursion(char *s)
{
	if (!*s)
	{
		return;
	}
	else if (*s)
	{
		_putchar(*s);
		s--;
		_print_rev_recursion(s);

	}
}
