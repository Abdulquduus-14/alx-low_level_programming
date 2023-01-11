#include "main.h"

har *_strcat(char *dest, char *src)
{
	if (*dest == NULL)
	{
		dest = src;
		
	}
	else
	{
	while (*dest != '\0')
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}	

	return (dest);
}
