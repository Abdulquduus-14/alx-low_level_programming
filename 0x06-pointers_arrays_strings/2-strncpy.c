#include "main.h"
/**
 * _strncpy:  copies a n string from source to
 * destination
 *
 * Return: char *
 * @dest: char * to copy to
 * @src: char * to copy from
 * @n: number of characters to copt
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char * p;

	i = 0;
	p = dest;

	while (i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	return (p);
}
