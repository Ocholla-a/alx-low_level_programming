#include "main.h"

/**
 * jack_bauer - prints time
 *
 * Return: void
 */

void jack_bauer(void)
{
	char i, j, m, n;

	for (i = '0' ; i < '0' + 3 ; i++)
	{
		for (j = '0' ; j < '0' + 4 ; i++)
		{
			for (m = '0' ; m <= '0' + 6 ; m++)
				for (n = '0' ; n <= '0' + 9 ; n++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(m);
					_putchar(n);
					_putchar('\n');
		}
	}
}
