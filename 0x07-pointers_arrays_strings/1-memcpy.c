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
	char *p;

	i = 0;
	p = dest;

	while (i < n)
	{
		dest[i] = src[i];
		
		i++;
	}

	return (p);
}
