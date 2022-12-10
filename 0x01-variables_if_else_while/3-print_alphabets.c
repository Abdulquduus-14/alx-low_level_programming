#include <stdio.h>
/**
 * main: prints the alphabet in lowercase, and uppercase
 *
 * Return: 0 for success
 * @i: char parameter
 */

int main(void)
{
	char i;

	for (i = 97; i < 123; i++)
		putchar(i);
	for (i = 65; i < 91; i++)
		putchar(i);

	putchar('\n');

	return (0);

}
