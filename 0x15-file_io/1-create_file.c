#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename: the name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;


	if (filename == NULL)
		return (-1);
	if (filename)
	{
		fd = open(filename, O_RDWR | O_TRUNC);
	}
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_RDWR | O_CREAT);
		if (fd == -1)
			return (-1);
	}
	if (close(fd) == -1)
		return (-1);

	return (1);
}
