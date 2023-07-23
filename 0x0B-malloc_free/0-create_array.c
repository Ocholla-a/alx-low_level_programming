#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array and initializes
 * it with the character given
 * @size: the size of the array
 * @c: the character to fill the array
 *
 * Return: pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	if (ptr == 0)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		ptr[i] = c;
	return (ptr);
}
