#include <stdio.h>
/**
 * main: program entering point
 *
 * Return: 0 for success
 * @i: char
 */

int main(void)
{
	char i;

	for (i = 97; i < 123; i++)
	{
		if ((i == 'q') || (i == 'e'))
		{
		}
		else
			putchar(i);
	}
	putchar('\n');

}
