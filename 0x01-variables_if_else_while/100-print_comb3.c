#include <stdio.h>
/**
 * main:  prints all possible different combinations of two digits.
 *
 * Return: 0 if success
 * @i: int type
 * @j: int type
 */

int main(void)
{
	int i, j;

	i = 48;
	j = 48;

	while (i < 58)
	{
		while (j < 58)
		{
			if (i == j)
			{
			}

			else
			{
				putchar(i);
				putchar(j);
				putchar(',');
				putchar(' ');

			}
			j++;
		}
		j = 48;
		i++;

	}
	putchar('\n');

	return (0);
}
