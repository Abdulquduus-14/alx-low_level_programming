#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *p;

	i = 0;
	p = dest;

	while (i < n)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}

	return (p);
}
