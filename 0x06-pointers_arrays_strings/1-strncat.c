#include "main.h"
/**
 * _strncat:  concatenates two strings,
 * using at most n bytes from src
 *
 * Return: char * type
 * @dest: char *
 * @src: char *
 * @n: length of string to add
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	i = 0;
	
	while (*dest != '\0')
		dest++;
	
	while ((i < n) && (*src != '\0'))
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (dest);
}
