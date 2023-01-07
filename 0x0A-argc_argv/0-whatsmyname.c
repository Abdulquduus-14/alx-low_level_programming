#include <stdio.h>

/** main: prints the name of the program being run
 *
 * Return: 0 for succes, otherwise 1
 * @argc: int parameter
 * @argv: array of pointers to character
 */

int main(int argc, char *argv[])
{
	puts(argv[argc - 1]);
	return (0);
}
