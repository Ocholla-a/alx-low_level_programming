#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to be printed
 *
 * Return: nothing
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n / 10)
	{
		print_number((n) / 10);
	}
	_putchar('0' + (n % 10));
}
