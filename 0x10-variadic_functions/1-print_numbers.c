#include <stdlib.h>
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
	

	va_start(p, n);

	for (i = 0; i < (n - 1) && n != 0; i++)
	{
		if (!separator)
		{
			printf("%d", va_arg(p, int));
		}
		else
			printf("%d%s", va_arg(p, int), separator);
	}
	if (n)
		printf("%d\n", va_arg(p, int));
	else
		printf("\n");
		
	va_end(p);

}
