#include "main.h"

/**
 * times_table - prints the multiplication table upto 9
 * @i: loop parameter
 * @j: loop parameter
 * @mult: value of multiplication of i and j
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, mult;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			mult = i * j;
			print_no(mult);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else 
				_putchar('\n');
		}
	}
}

/**
 * print_no - print the number
 * @n: the number input
 *
 * Return: void
 */

void print_no(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n/10)
		print_no(n/10);
	_putchar((n % 10) + '0');
}
