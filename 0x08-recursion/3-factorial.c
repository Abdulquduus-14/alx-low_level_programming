#include "main.h"
/**
 * factorial: returns the factorial of a given number.
 * Return: int
 * @n: number to find its factorial
 *
 */

int factorial(int n)
{
	int s;

	s = n;
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (s * factorial(n - 1));
	}
	_putchar('\n');
}
