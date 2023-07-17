#include "main.h"
#include <stdio.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: the dog
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner of the dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}