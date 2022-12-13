#include "main.h"
/**
 *  _abs: computes the absolute value of an integer
 *
 * Return: int type
 * @n: int variable
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1 * n);
	}

	_putchar('\n');

}
