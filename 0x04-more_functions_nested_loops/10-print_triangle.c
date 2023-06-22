#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: dimension of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	if ((size < 0) || (size == 0))
		_putchar('\n');
	else
		for (i = 0 ; i < size ; i++)
		{
			for (j = (size - 1) ; j > 0 ; j--)
			{
				_putchar(' ');
			}
			for (j = 0 ; j <= i ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
}
