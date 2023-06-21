#include "main.h"

/**
 * print_to_98 - prints numbers to 98
 * @n: input number
 *
 * Return: 0 always
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (int i = n ; n < 99 ; i++)
		{
			print_no(i);
			if (i != 98)
			{
				_putchar(',');
			}
			_putchar(' ');
		}
	}
	if (n > 98)
	{
		for (i = n ; i > 97 ; i--)
		{
			print_no(i);
			if (i != 98)
			{
				_putchar(',');
			}
			_putchar(' ');
		}
	}
	else
		print_no(98);
	return (0);
}
