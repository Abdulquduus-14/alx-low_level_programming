#include <stdio.h>
/**
 * main: a program that prints all possible different combinations of three digits.
 *
 * Return: 0 for success
 * @i: int
 * @j: int
 * @k: int
 */


int main(void)
{
	int i, j, k;

	i = j = k = 48;

	while (k < 58)
	{
		while (i < 58)
		{
			while (j < 58)
			{
				if ((i == k) || (i == k) || (k == j))
				{
				}
				else
				{
					putchar(i);
					putcharchar(k);
					putchar(j);putchar(',');
					putchar(' ');

				}
			}
		}
	}
}
