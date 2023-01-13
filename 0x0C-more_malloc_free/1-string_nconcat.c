#include <stdlib.h>
#include <stddef.h>
/**
 * _strlen: get the length of string
 * @s: string to find its length
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int c;
	for (c = 0; *s; c++)
	{
	}

	return (c + 1);
}
/**
 * string_nconcat: a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of characters to copy from s2into new string
 *
 * Return: newly allocated pointer to char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size1, size2, i, j;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		S2 = "";

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	if (n >= size2)
		p = (char *) malloc(((size1 + size2) - 1) * sizeof(char));
	else
		p = (char *) malloc(((size + n) - 1) * sizeof(char));
	if (!p)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (j = 0; s2[j] != '\0'; i++, j++)
		p[i] = s2[j];
	p[i] = '\0';
	return (p);

}
