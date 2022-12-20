#include "main.h"
/**
 * _atoi: convert a string to an integer.
 *
 * Return: int type
 * @s: char * type
 */

int _atoi(char *s)
{
	int n;

	n = 0;
	if (*s == '\0')
		return (0);
	else
	{
		while (*s != '\0')
		{
			if (*s == '-' || *s == '+' || (*s >= 48 && *s < 58))
				n = (n * 10) + (*s - '0');
			s++;
		}
	}
}
