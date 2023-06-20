#include "main.h"

/**
 * print_sign - prints the sign of the number
 * @n: the input number
 *
 * Return: -1, 0 or 1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
