#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file to read from
 * @letters: the number of letters it should read and print
 *
 * Return: number of letters it could read and print for success, else 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int inputfd;


	if (filename == NULL)
		return (0);

	inputfd = open(filename, O_RDONLY);
	if (inputfd == -1)
		return (0);
}
