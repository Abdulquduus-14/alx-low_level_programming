#include "dog.h"
#include <stdlib.h>
/**
 * new_dog-  a function that creates a new dog.
 * @name: name of dog
 * @age: dog's age
 * @owner: owner of dog
 * Return: pointer to dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog;


	mydog = malloc(sizeof(dog_t));
	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	if (!mydog)
		return (NULL);
	mydog->name = name;
	mydog->age = age;
	mydog->owner = owner;

	return (mydog);
}
