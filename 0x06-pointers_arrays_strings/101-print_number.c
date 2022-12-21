#include "main.h"
/**
 * print_number: prints an integer given as
 * argument
 *
 * Return: void
 * @n: int to print
 */

void print_number(int num)
{
	unsigned int n;

	n = num;

	if (num < 0)
	{
		_putchar('-');
		n = -num;
	}

	if (n / 10 != 0)
       	{
		print_number(n / 10);
	}
	_putchar((n % 10) + 48);

}
