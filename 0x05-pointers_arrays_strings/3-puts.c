#include "main.h"
/**
 * _puts: prints a string, followed by a new line,to stdout
 *
 * Return: void
 * @str: string to display on the stdout
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
