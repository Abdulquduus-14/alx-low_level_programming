#include <stdio.h>
/**
 * main: prints all possible combinations of single-digit numbers.
 *
 * Return: 0 for success
 * @j: int type
 */

int main(void)
{
	int j;
	j = 48;

	while (j < 57)
	{
		putchar(j);
		putchar(',');
		putchar(' ');
		j++;
	}

	putchar(j);

	return (0);

}
