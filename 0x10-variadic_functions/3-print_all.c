#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: is a list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list p;
	int c;
	char *str;

	va_start(p, format);
	c = 0;

	while (format && format[c] != '\0')
	{
		switch (format[c])
		{
			case 'c':
				printf("%c", va_arg(p, int));
				break;
			case 'i':
				printf("%d", va_arg(p, int));
				break;
			case 'f':
				printf("%f", va_arg(p, double));
				break;
			case 's':
				str = va_arg(p, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				break;
		}
		if (c < strlen(format))
			printf(", ");
		c++;
	}
	va_end(p);
	printf("\n");

}
