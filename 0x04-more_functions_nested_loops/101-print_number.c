#include "main.h"
/**
 * print_number:  prints an integer
 *
 * Return: void
 * @n: int type
 */

void print_number(int n)
{
	int i, j, k, l;

	if (n < 0)
	{
		_putchar('-');
	}

	n = -1 * n;

	if (n >= 48 && n < 58)
		_putchar(n);
	else if (n > 57 && n < 100)
	{
		i = n / 10;
		j = n % 10;
		_putchar('0' + i);
		_putchar('0' + j);
	}
	else if (n >= 100 && n < 1000)
	{
		k = n / 100;
		l = n % 100;
		i = l / 10;
		j = n % 10;
		_putchar('0' + k);
		_putchar(48 + i);
		_putchar(48 + j);
	}
}
