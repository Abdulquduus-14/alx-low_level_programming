#include "main.h"
#include <stddef.h>

char *_strstr(char *haystack, char *needle)
{
	int t;
	char *p, *p2;

	for (t = 0; haystack[t]; t++)
		p = &haystack[t];

	p2 = needle;
	while (*p2 && (*p2 == *p))
	{
		p++;
		p2++;
	}

	if (!*p2)
		return (&haystack[t]);
	return (NULL);
}
