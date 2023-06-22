#include "main.h"

/**
 * more_numbers - prints numbers ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, n;

	for (i = 0 ; i < 10 ; i++)
	{
		for (n = 0 ; n < 15 ; n++)
		{
			print_no(n);
		}
		_putchar('\n');
	}
}

/**
 * print_no - prints an integer passed to it
 *@n: the integer to be printed
 * Return: void
 */

void print_no(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_no((n) / 10);
	_putchar('0' + ((n) % 10));
}
