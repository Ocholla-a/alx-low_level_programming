#include "main.h"
#include <stdlib.h>
#include <string.h>


char *str_concat(char *s1, char *s2)
{
	unsigned int n, i;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
		s2 = "";
	n = strlen(s1) + strlen(s2);
	strcat(s1, s2);
	ptr = malloc(sizeof(char) * n + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; i < n ; i++)
		ptr[i] = s1[i];
	ptr[i + 1] = '\0';
	return (ptr);
}
