#include <stdlib.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 * return: nothing for success, otherwise non-zero value
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	const char *s;


	for (i = 0; i < n; s =  va_arg(p, const char *), i++)
	{
		if (s == NULL)
			printf("nil");
		else
			printf("%s", s);
		if (separator == NULL)
		{
		}
		else
			printf("%s", separator);
	}
	va_end(p);
	_putchar('\n');
}
