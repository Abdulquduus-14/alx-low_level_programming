#include "main.h"
/**
 * print_alphabet_x10: prints 10 times the alphabet, in lowercase
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i, j;
	char l;

	i = 0;
	j = 0;
	l = 97;

	while (j < 10)
	{
		while (i < 26)
		{
			_putchar(l);
			l++;
			i++;
		}
		j++;
		i = 0;
		l = 97;
		_putchar('\n');
	}

}
