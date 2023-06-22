#include "main.h"

/**
 * print_square - print a square
 * @size: dimension of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if ((size < 0) && (size ==0))
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0 ; i < size ; size++)
		{
			for (j = 0 ; j < size ; size++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
