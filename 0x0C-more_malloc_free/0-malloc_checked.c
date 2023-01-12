#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked: function that allocates memory using malloc.
 * @b: size of bytes to be return
 * 
 * Return: pointer to memory allocated
 */

void *malloc_checked(unsigned int b)
{
	double *p;

	p = malloc(sizeof(*p));

	if (!p)
		exit (98);

	p = &b;
}
