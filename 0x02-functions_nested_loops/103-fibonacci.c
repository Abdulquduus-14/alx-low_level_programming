#include <stdio.h>
/**
 * main- program starting point
 *
 * return: 0 for success
 */
int main(void)
{
	unsigned long int i, k, j, sum;

	i = 1;
	j = 2;
	k = i + j;
	sum = j;

	while (k < 4000000)
	{
		if ((k % 2) == 0)
		{
			sum += k;

		}
		i = j;
		j = k;
		k = i + j;
	}

	printf("%lu", sum);
	printf("\n");

	return (0);


}
