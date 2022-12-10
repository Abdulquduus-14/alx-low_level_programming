#include <stdio.h>
/**
 * main: entering point for program
 *
 * Return: 0 for success
 * @i: char parameter
 */

int main(void)
{

	char i;
	i = 97;

	for (; i < 123; i++)
		putchar(i);

	putchar('\n');

	return (0);

}
