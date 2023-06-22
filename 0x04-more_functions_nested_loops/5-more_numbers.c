#include "main.h"

/**
 * more_numbers - prints numbers ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		for (n = 0 ; n < 15 ; n++)
		{
			print_no(n);
		}
		_putchar('\n');
	}
}
