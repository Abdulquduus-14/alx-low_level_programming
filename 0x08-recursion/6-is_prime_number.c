#include "main.h"
/**
 * is_prime_number: takes an integer argument and returns
 * if the input integer is a prime number
 *
 * Return: 1 if the input integer is a prime number, else 0
 * @n: number to find if it is a prime number
 */

int is_prime_number(int n)
{
	int i, c;

	i = 1;
	c = 0;

	if (n < 0)
		return (0);
	if ((n % 2) == 0)
		return (1);
	if (i <= n)
	{
		if ((n % i) == 0)
			c++;
		i++;
		is_prime_number(n);

	}
	if (c == 2)
		return (1);
	else
		return (0);

	_putchar('\n');

}
