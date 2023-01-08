#include <stdio.h>
#include <stdlib.h>

/**
 * main: adds positive numbers
 * @argc: number of arguments
 * @argv: array of pointers
 *
 * Return: 0 for success, else non-zero
 */

/**
 * isnum: checks if a string is a number or not
 * @s: string to check
 *
 * Return: 1 if true, else 0
 */
int isnum(char *s)
{
	for (; *s != '\0'; s++)
	{
		if (*s < '0' || *s > '9')
			return (0);
	}
	return (1);
}

int main(int argc, char **argv)
{
	int total, c;

	c = 1;
	total = 0;

	while (c < argc)
	{
		if (isnum(argv[c]) == 0)
		{
			puts("Error");
			return (1);
		}

		total = total + atoi(argv[c]);
		c++;
	}

	printf("%d\n", total);

	return (0);
}
