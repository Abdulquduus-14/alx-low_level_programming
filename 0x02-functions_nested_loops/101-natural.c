#include <stdio.h>
/**
 * main: program entering point
 *
 * Return: 0 for success
 */

int main(void)
{
	int i, j;

	i = 0;
	j = 0;

	while (i < 1024)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		       j += i;
		i++;
	}
	printf("%d\n", j);

	return (0);

}
