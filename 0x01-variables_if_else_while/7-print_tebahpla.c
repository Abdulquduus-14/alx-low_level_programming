#include <stdio.h>
/**
 * main: entering point for program
 *
 * Return: 0 for success
 * @i: char type
 */

int main(void)
{
	char i;

	i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}

	putchar('\n');

	return (0);

}
