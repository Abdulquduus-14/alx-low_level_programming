#include <stdlib.h>
/* #include "main.h" */
#include "dog.h"
/**
 * init_dog - function that initializes a struct dog variable
 * @d: pointer to struct dog
 * @name: name of dog parameter
 * @age: age of dog
 * @owner: name of dog's owner
 *
 * Return: nothing for success
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
