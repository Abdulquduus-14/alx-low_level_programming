#include <stdlib.h>
#include <string.h>
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
	d->name, name;
	d->age = age;
	d->owner, owner;
}
