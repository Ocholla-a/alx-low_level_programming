#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int count, i;

	count = strlen(s);
	i = count - 1;
	if (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
