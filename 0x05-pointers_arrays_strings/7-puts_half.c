#include "main.h"
/**
 * puts_half: prints half of a string,
 * passed as an argument to it
 *
 * Return: void
 * @str: chat * parameter
 */

void puts_half(char *str)
{
	int n, length_of_the_string, i, j;

	length_of_the_string = 0;
	i = 0;

	while (*str != '\0')
	{
		length_of_the_string++;
		str++;
	}

	if (length_of_the_string % 2 == 0)
		n = length_of_the_string / 2;
	else if (length_of_the_string % 2 != 0)
		n = (length_of_the_string - 1) / 2;

	j = n;
	while (i < n)
	{
		_putchar(*(str - j));
		i++;
		j--;
	}
	_putchar('\n');
}
