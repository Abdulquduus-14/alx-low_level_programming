#include <stdlib.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 * return: nothing for success, otherwise non-zero value
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	int s;

	for (i = 0; i < n; s = va_arg(p, int), i++)
	{
		printf("%d", s);
		if (i == n - 1)
			continue;
		if (separator == NULL)
		{
		}
		else
			printf("%s", separator);
	}
	va_end(p);
	printf("\n");
}
