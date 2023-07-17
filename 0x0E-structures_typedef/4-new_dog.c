#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: void
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	newdog = malloc(sizeof(dog_t));
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	return (0);
}
