#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_strdup -  returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: the string to be stored
 *
 * Return: a pointer to where the string is stored
 */
char *_strdup(char *str)
{
	char *ptr;
	int n, i;

	if (str == NULL)
		return (NULL);
	n = strlen(str);
	ptr = malloc((sizeof(char) * n) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; i <= n ; i++)
		ptr[i] = str[i];
	return (ptr);
}
