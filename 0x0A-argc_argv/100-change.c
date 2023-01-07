#include <stdio.h>
#include <stdlib.h>

/**
 * main: prints the minimum number of coins to make change for
 * an amount of money.
 * @argc: number of command lines
 * @argv: array of pointers
 *
 * Return: 0 for success, else non-zero
 */

int main(int argc, char *argv[])
{
	int c;

	argv[0] = "change";
	argv[1] =  "cents";

	if ((argc - 1) != 1)
	{
		puts("Error");
		return (1);
	}

	if (atoi(cents) < 0)
	       puts("");
	/*if ((atoi(cents) == 10)	|| (atoi(cents) == 25) ||
 	(atoi(cents) == 5) || atoi(cents) == 2 || atoi(cents) == 1)
	*/
		printf("%d\n", atoi(cents));

	return (0);
}
