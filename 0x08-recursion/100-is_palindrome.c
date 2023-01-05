#include "main.h"
/**
 * is_palindrome: takes a string and check if it is a
 * palindrome
 *
 * Return: returns 1 if a string is a palindrome and 0 if not.
 * @s: char *
 */

int is_palindrome(char *s)
{
	char *a;

	a = s;
	if (*s == '\0')
		return (1);
	if(!*s)
		s++;
	s--;
	if (*s)
	{
		*a = *s;
		a++;
		s--;
		is_palindrome(s);
	}
	*a = '\0';

	if (a == s)
		return (1);
	else 
		return (0);
	_putchar('\0');
}
