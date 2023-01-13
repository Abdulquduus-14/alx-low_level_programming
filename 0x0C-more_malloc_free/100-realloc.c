#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * realloc: a function that reallocates a memory block using malloc and free
 * @old_size:  is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 *
 * Return: a pointer to the newly allocate space if success, else NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (new_size == old_size)
		return (ptr);
	if (new_size > old_size)
		new_size = old_size;
	if (ptr == NULL)
		p = malloc(new_size);
	if (new_size == 0 && ptr == NULL)
	{
		free(ptr);
		return (ptr);
	}

	if (!p)
		return (p);

}
