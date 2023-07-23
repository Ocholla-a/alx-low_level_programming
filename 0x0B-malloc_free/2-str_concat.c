#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concanates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the concanated string
 */
char *str_concat(char *s1, char *s2)
{
	int n, i, j, k;
	char *ptr;

	i = 0;
	j = 0;
	k = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	k = i + j + 1;
	ptr = malloc(sizeof(char) * k);
	if (ptr == NULL)
		return (NULL);
	for (n = 0 ; n < i ; n++)
		ptr[n] = s1[n];
	for (n = 0 ; n < j ; n++)
		ptr[n + i] = s2[n];
	return (ptr);
}
