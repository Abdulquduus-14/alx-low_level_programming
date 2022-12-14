#include "main.h"
/**
 * print_last_digit: prints the last digit of a number
 *
 * Return: int type
 * @n: int parameter
 */

int print_last_digit(int n)
{
	if ((n >= 0) && (n < 10))
		_putchar('0' + n);
	else if (n >= 10)
	{
		n = n % 10;
		_putchar('0' + n);
	}
	_putchar('\n');

	return (n);

}
