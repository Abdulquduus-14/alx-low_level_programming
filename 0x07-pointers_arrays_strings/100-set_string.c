#include "main.h"
/**
 * set_string: sets the value of a pointer to a char.
 *
 * Return: void
 * @s: char **
 * @to: char *
 */

void set_string(char **s, char *to)
{
	for (; (**s = *to) != '\0'; to++, *s++)

}
