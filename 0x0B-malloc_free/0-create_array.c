#include "main.h"
#include <stddef.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		ptr[i] = c;
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
