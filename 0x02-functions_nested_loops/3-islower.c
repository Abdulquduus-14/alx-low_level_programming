#include "main.h"
/**
 * _islower: user-defined function
 * checks for lowercase character
 *
 * Return: int type
 * @c: int parameter
 */

int _islower(int c)
{
	if ((c >= 97) && (c < 123))
	{
		return (1);
	}

	else
	{
		return (0);
	}
	_putchar('\0');

}
