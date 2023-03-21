#include "main.h"


int _strlen(char *s)
{
	int l;

	for (l = 0; *s != '\0'; l++)
	{
		l++;
	}

	return (l);
}
