#include "main.h"
char *_strcpy(char *dest, char *src)
{
	char *s;

	s = dest;
	while (*s != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	dest = s;
	return (dest);
}
