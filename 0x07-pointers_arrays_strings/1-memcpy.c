#include "main.h"
/**
 * _memcpy: copies memory area.
 *
 * Return: char *
 * @dest: char * parameter
 * @src: char * parameter
 * @n: int parameter
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;


	i = 0;

	while (i < n)
	{
		dest[i] = src[i];

		i++;
	}
	dest[i] = '\0';

	return (dest);
}
