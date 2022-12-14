#include "main.h"
#include <stdio.h>
/**
 * times_table- prints the 9 times table, starting with 0.
 *
 * Return: void
 */

void times_table(void)
{
	int i, c;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c < 10; c++)
		{
			if (c == 9)
				printf("%d", i * c);
			else
				printf("%d, ", i * c);

		}
		c = 0;
		printf("\n");
	}

	printf("\n");
}
