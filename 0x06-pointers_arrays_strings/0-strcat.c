#include "main.h"
/**
 * _strcat: function that concatenates two strings.
 *
 * Return: char * type
 * @dest: char * parameter
 * @src: char * parameter
 */

char *_strcat(char *dest, char *src)
{
	char * p;


	p = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	dest--;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (p);
}
