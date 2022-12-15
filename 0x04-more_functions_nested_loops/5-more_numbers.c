#include "main.h"
/**
 * more_numbers: prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j, n, t;

	n = 48;
	t = 0;

	while (t < 14)
	{
		while (n < 63)
		{
			if (n  == 58)
			{
				i = n - 9;
				j = n - 10;
				_putchar(i);
				_putchar(j);
			}
			else if (n == 59)
			{
				i = n - 10;
				j = n - 10;
				_putchar(i);
				_putchar(j);
			}
			else if (n == 60)
			{
				i = n - 11;
				j = n - 10;
				_putchar(i);
				_putchar(j);
			}
			else if (n == 61)
			{
				i = n - 12;
				j = n - 10;
				_putchar(i);
				_putchar(j);
			}
			else if (n == 62)
			{
				i = n - 13;
				j = n - 10;
				_putchar(i);
				_putchar(j);
			}
			else
			{
				_putchar(n);
			}
			n++;
		}
		_putchar('\n');
		n = 48;
		t++;
	}
	_putchar('\n');

}
