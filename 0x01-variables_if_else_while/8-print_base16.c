#include <stdio.h>
/**
 * main: numbers of base 16 in lowercase
 *
 * Return: 0 for success
 * @i: char type
 */

int main(void)
{
	char i;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (i = 97; i < 103; i++)
		putchar(i);

	putchar('\n');

	return (0);

}
