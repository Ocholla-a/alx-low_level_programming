#include "main.h"
#include <string.h>

/**
 * _puts_recursion - prints a string
 * @s: the string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	int count, i;

	count = strlen(s);
	i = 0;
	if (i < (count - 1))
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
