#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: 0 for success, else non-zero value
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	/*int s;*/

	for (i = 0; i < n; s = va_arg(p, char), i++)
	{
		/*if (s == NULL)
			printf("nil");
		else
			printf("%s",s);*/
		if (separator == NULL)
		{
		}
	}
	va_end(p);
	printf("\n");
}
