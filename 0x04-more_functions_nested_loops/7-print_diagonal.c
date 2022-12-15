#include "main.h"
/**
 * print_diagonal:  draws a diagonal line on the terminal
 *
 * Return: void
 * @n: int type
 */

void print_diagonal(int n)
{
	int i, j;

	i = 0;
	j = 0;
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (j < n)
		{
			_putchar('\\');
			_putchar('\n');

			while (i <= j)
			{
				_putchar(' ');
				i++;
			}
			i = 0;
			j++;
		}
	}
}
