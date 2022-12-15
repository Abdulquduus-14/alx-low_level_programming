#include "main.h"
/**
 * _isdigit: checks for a digit from 0 to 9
 *
 * Return: int type
 * @c: int parameter
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
