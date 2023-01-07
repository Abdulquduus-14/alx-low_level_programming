#include <stdio.h>
#include <stdlib>

/**
 * main: adds positive numbers
 * @argc: number of arguments
 * @argv: array of pointers
 *
 * Return: 0 for success, else non-zero
 */

int main(int argc, char **argv)
{
	int c, total;

	c = 1;
	total = 0;

	if ((*argv[1] < 48) || (*argv[2] > 58))
	{
		printf("Error\n");
		return (1);
	}

	if ((*argv[1] == NULL) && (*argv[2] == NULL))
		printf("0\n");

	total = atoi(argv[1]) + atoi(argv[2]);

	printf("%d\n", total);

	return (0);
}
