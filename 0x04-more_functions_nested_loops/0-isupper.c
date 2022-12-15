#include "main.h"
/**
 * _isupper: checks for uppercase letter
 *
 * Return: 1 for success, 0 otherwise
 * @c: int parameter
 */

int _isupper(int c)
{
	if (c >= 48 && c < 91)
		return (1);
	else
		return (0);

}
