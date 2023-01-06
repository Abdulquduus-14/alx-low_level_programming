#include <stdio.h>

/** main: prints the name of the program being run
 *
 * Return: 0 for succes, otherwise 1
 * @argc: int parameter
 * @argv: array of pointers to character
 */

int main(int argc, char *argv[])
{
	printf("%s", argv[0]);
	printf("\n");

	return (0);
}
