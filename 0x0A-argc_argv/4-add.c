#include <stdio.h>
#include <stdlib.h>

/**
 * main: adds positive numbers
 * @argc: number of arguments
 * @argv: array of pointers
 *
 * Return: 0 for success, else non-zero
 */

int main(int argc, char **argv)
{
	int total;

	
	total = 0;

	if ((*argv[1] < 48) || (*argv[2] > 58))
	{
		printf("Error\n");
		return (1);
	}

	if ((*argv[1] == 0) && (*argv[2] == 0))
		printf("0\n");

	total = atoi(argv[1]) + atoi(argv[2]);

	printf("%d\n", total);

	return (0);
}
