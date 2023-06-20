#include "main.h"

/**
 * jack_bauer - prints time
 *
 * Return: void
 */

void jack_bauer(void)
{
	char i, j;

	for (i = '0' ; i < '0' + 24 ; i++)
	{
		for (j = '0' ; j < '0' + 60 ; i++)
		{
			_putchar(i + ':' + j);
		}
		_putchar('\n');
	}
}
