#include <stdlib.h>
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
	unsigned int sum;

	sum = 0;
	if (n == 0)
		return (0);

	va_start(p, n);
	for (sum = n; sum; sum = va_arg(p, unsigned int))
		sum += sum;
	va_end(p);

	return (sum);
}
