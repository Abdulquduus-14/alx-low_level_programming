#include <stdio.h>

/**
 * main: prints all arguments passed in commandline
 * @argc: size of array
 * @argv: array containing elements
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int c;

	c = 0;
	
	
	while (c < argc)
	{
		printf("%s\n", argv[c]);
		c++;
	}
	
	return (0);
}
