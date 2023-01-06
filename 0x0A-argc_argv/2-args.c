#include <stdio.h>
/**
 * main: prints all arguments it receives.
 *
 * Return: 0 for success, otherwise non-zero
 * @argc: number of commands
 * @argv: arrays of pointers to characters
 */

int main(int argc, char *argv[])
{
	int c;

	c = 1;
	printf("%s\n", argv[0]);
	if (argc > 1)
	{
		while (c < argc)
		{
			printf("%s\n", argv[count]);
			c++;
		}
	}
	return (0);
}
