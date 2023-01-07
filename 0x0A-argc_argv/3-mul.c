#include <stdio.h>
#include <stdlib.h>

/**
 * main: multiplies two numbers passed as argument
 * @argc: number of parameters
 * @argv: array of pointers argument
 *
 * Return: 0 for success, otherwise non-zero
 */

int main(int argc, char *argv[])
{
	int n, n1, n2;

	n = argc - 1;
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	if (n != 2)
	{
		printf("%s", "Error");
		printf("\n");

		return (1);
	}

	printf("%d\n", n1 * n2);

	return (0);
}
