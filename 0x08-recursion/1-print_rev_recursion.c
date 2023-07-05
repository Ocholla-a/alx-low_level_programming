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
	int count;

	count = strlen(s);
	print_rev_recursion(0, count, s);
	_putchar('\n');
}

/**
 * print_rev_recursion - prints a string in reverse
 * @i: flow controller
 * @n: length of the string
 * @s: the string
 *
 * Return: void
 */

void print_rev_recursion(int i, int n, char *s)
{
	if (i < n)
	{
		print_rev_recursion(i + 1, n, s);
		_putchar(s[i]);
	}
}
