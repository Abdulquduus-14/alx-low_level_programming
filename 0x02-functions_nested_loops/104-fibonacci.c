#include <stdio.h>
/**
 * main- program starting point
 *
 * Return: 0 for success, otherwise non-zero
 */
int main(void)
{
	unsigned long int i, j, k, c;

	i = 1;
	j = 2;
	c = 0;

	printf("%lu, %lu", i, j);
	while (c < 98)
	{
		k = j + i;
		printf(", %lu", k);
		i = j;
		j = k;
		c++;
	}
	printf("\n");
	return (0);
}
