#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef BUF_SIZE
#define BUF_SIZE 1024
#endif
/**
 * main - program that copies the content of a file to another file.
 * @argc: number of files to use
 * @argv: array of pointers to file names
 *
 * Return: 0 for success, else non-zero value
 */
int main(int argc, char *argv[])
{
	int inputFd, outputFd, openFlags;
	ssize_t numRead;
	char buf[BUF_SIZE];

	if (argc != 3 || strcmp(argv[1], "--help") == 0)
	{
		dprintf(2, "Usage: cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}

	inputFd = open(argv[1], O_RDONLY);
	if (inputFd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	openFlags = O_CREAT | O_WRONLY | O_TRUNC;
	outputFd = open(argv[2], openFlags);
	if (outputFd == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((numRead = read(inputFd, buf, BUF_SIZE)) > 0)
	{
		if (write(outputFd, buf, numRead) != numRead)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if ((close(inputFd) == -1) || (close(outputFd) == -1))
	{
		dprintf(2, "Error: Can't close fd %d\n", inputFd);
		exit(100);
	}
	return (0);
}
