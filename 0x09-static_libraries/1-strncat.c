#include "main.h"
#include <stddef.h>
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	if (*dest == NULL)
		dest = src;
	else
	{

	while (*dest != '\0')
		dest++;
	}

	while ((i < n) && (*src != '\0'))
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	return (dest);
}
