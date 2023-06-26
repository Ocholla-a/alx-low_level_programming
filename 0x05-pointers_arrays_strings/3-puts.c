#include "main.h"

/**
 * _puts - prints a string
 * @str: the string
 *
 * Return: void
 */

void _puts(char *str)
{
	const int max = 1000;
	int i;

	for (i = 0 ; i < max ; i++)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		else
			_putchar(str[i]);
	}
}
