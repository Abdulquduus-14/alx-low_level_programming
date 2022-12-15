#include "main.h"
/**
 * print_triangle
 *
 * return: void
 * @size: int type
 */

void print_triangle(int size)
{
	int i, j;

	i = 0;
	j = 1;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (j < size)
		{
			_putchar(' ');
			_putchar('\n');
			while (i < j)
			{
				_putchar('*');
				i++;
			}
			i = 0;
			j++;
		}
	}
	_putchar('\n');
}
