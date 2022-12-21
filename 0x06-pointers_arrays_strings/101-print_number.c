#include "main.h"
/**
 * print_number: prints an integer given as
 * argument
 *
 * Return: void
 * @n: int to print
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	else
       	{
		_putchar(n / 10);
		_putchar(n % 10);
	}

	_putchar(n + 48);
}
