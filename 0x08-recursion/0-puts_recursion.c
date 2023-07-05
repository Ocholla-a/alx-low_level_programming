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
	putsrecursion(0, count, s);
	_putchar('\n');
}

/**
 * putsrecursion - prints a string
 * @i: flow
 * @n: string length
 * @s: the string
 *
 * Return: void
 */

void putsrecursion(int i, int n, char *s)
{
	if (i < n)
	{
		_putchar(s[i]);
		putsrecursion(i+1, n, s);
	}
}	
