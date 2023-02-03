#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: number to print its binary equivalent
 *
 */
void print_binary(unsigned long int n)
{
	/*unsigned int i, sum;*/

	/*if (n >= 0 && n < 2)*/
	/*printf("%lu\n", n);*/
	if (n >> 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
