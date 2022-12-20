#include "main.h"
/**
 * _strcpy: copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * Return: char *
 * @dest: char * parameter
 * @src: char * parameter
 */

char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (dest);
}
