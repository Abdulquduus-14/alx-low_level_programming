#include "main.h"
/**
 * _memset: fills memory with a constant byte.
 *
 * Return: char *
 * @s: char *
 * @b: character for filling
 * @n: unsigned int
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	
	for(i = 0; i < n; i++)
	{
		s[i] = b;
		
	}
	s[i] = '\0';

	return (s);
}
