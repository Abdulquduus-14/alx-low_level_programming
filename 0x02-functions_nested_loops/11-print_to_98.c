#include <stdio.h>
#include "main.h"
/**
 * main: program entering point.
 * print_to_98: prints all natural numbers from n to 98
 *
 * Return: void
 * @n: int parameter
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		if (n == 98)
			printf("%d", n);
		else
			printf("%d, ", n);
		n++;
	}

	while (n >= 98)
	{
		if (n == 98)
			printf("%d", n);
		else
			printf("%d, ", n);
		n--;
	}
	_putchar('\n');
	printf('\n');

}
