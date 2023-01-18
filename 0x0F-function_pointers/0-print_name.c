#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name- a function that prints a name
 * @name: pointer to char
 * @f: function pointer
 * Return: nothing for success
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)();
}
