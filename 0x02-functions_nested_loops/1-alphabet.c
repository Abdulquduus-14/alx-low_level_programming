#include "main.h"
/**
 * print_alphabet:  prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: void
 */

void print_alphabet(void)
{
	int i;
	int l;


	i = 0;
	l = 97;

	while (i < 26)
	{
		_putchar(l);
		l++;
		i++;
	}
	_putchar('\n');

}
