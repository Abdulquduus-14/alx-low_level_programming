#include "dog.h"
#include <stdlib.h>
/**
 * free_dog- function that deletes dog memory allocated
 * @d: pointer to dog 
 * Return: nothing for success
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
