#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

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
	char *s;

	va_start(p, n);

	for (i = 0; i < (n - 1) && n != 0; i++)
	{
		s = va_arg(p, char *);
		if (!separator)
			printf("%s", s ? s : "(nil)");
		else
			printf("%s%s", s ? s : "(nil)", separator);
	}

	if (n)
	{
		s = va_arg(p, char *);
		printf("%s\n", s ? s : "(nil)");
	}
	else
		printf("\n");
	
	va_end(p);
	
}
