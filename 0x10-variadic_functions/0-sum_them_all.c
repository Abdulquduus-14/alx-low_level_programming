#include <stdlib.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: const unsigned int argument
 * Return: returns the sum on success, else 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int sum, i;

	i = 0;
	if (n == 0)
		return (0);

	va_start(p, n);
	for (sum = n; i < n; sum = va_arg(p, unsigned int), i++)
		sum += sum;
	va_end(p);

	return (sum);
}
