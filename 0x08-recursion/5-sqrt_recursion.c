#include "main.h"
/**
 * _sqrt_recursion: takes an integer argument and
 * returns its square root
 *
 * Return: returns the square root value if successful,
 * otherwise returns -1
 *
 * @n: number to find its square root
 */

int _sqrt_recursion(int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		return (-1);
	}
	if (i <= n)
	{
		if (n == ((n / i) * (n / i)))
		{
			return (i);
		}
		i++;
		_sqrt_recursion(n);
	}
	_putchar('\n');
}
