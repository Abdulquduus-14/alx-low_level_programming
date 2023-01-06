#include <stdio.h>
#include <stdlib.h>
/**
 * main: entry point for program execution
 * prints the number of arguments passed into it.
 *
 * Return: 0 for success, otherwise non-zero
 * @argc: number of arguments
 * @argv: arrays of pointers to strings
 */

int main(int argc, char **argv)
{
	printf("%d", argc);
	putchar('\n');

	return (0);
}
