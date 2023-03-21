#include "main.h"
int _atoi(char *s)
{
	int n = 0;

	if (*s == '\0')
		return (0);
	while (*s != '\0')
	{
		if (*s == '-' || *s == '+' || (*s  >= '0' && *s <= '9'))
			n = (n * 10) + (*s - '0');
			s++;
	}
	return (n);
}
