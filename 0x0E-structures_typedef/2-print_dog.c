#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the details of the dog given
 * @d: the dog
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	if (d->age > 0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: 0\n");
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)");
}
