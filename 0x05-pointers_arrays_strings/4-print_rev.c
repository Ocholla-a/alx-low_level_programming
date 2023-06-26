#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: the string
 *
 * Return: void
 */

void print_rev(char *s)
{
	/*char str[] = strrev(s);*/
	int i, length;
	char temp;

	length = strlen(s);
	for (i = 0 ; i < length / 2 ; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
	i = 0;
	while (i < length)
	{
		_putchar(s[i]++);
	}
	_putchar('\n');
}
