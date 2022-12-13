#include "main.h"
/**
 *  _isalpha: program called function
 *   a function that checks for alphabetic character.
 *
 *   Return: int tpye
 *   @c: int parameter
 */

int _isalpha(int c)
{
	if (((c >= 97) && (c < 123)) || ((c >=65) && (c < 91)))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');

}
