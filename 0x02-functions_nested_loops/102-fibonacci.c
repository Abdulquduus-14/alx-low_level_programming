#include <stdio.h>
/**
 * main: program starting point
 *
 * Return: 0 for success
 */

int main(void)
{
	unsigned long int i, j, k, c;

	i = 1;
       	j = 2;
	c = 0;


	printf("%d, %d", i, j);
	while (c < 50)
	{
		k = i + j;
		printf(", %lu", k);

		i = j;
		j = k;
		c++;
	}
	printf("\n");
	return (0);

}
