#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: the length of the diagonal
 *
 * Return: void
 */

void print_diagonal(int n)
{
	if ((n < 0) && (n == 0))
		_putchar('\n');
	else
	{
		for (i = 0 ; i < n ; i++)
		{
			for (j = 0 ; j < (n - 1) ; j++)
				_putchar(92);
			_putchar('\n');
		}
	}
}
