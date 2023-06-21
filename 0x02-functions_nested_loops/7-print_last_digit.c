#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number input
 *
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int i;

	if (n < 0)
		n = (n) * (-1);
	i = n % 10;
	if (i > 0)
		i *= -1;
	_putchar('0' + i);
	return (i);
}
