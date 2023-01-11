#include "main.h"

/**
 * _isdigit: checks for number
 * @c: number to verify
 *
 * Return: int
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else 
		return (0);
}
