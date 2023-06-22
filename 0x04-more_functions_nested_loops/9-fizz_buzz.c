#include "main.h"
#include "_putchar.c"

void print_no(int n);

/**
 * main - code execution starts
 *
 * Return: 0 always
 */

int main(void)
{
	int i;

	for (i = 1 ; i < 101 ; i++)
	{
		if (((i % 3) == 0) && ((i % 5) != 0))
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar(' ');
		}
		if (((i % 5) == 0) && ((i % 3) != 0))
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
			_putchar(' ');
		}
		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
			_putchar(' ');
		}
		if (((i % 5) != 0) && ((i % 3) != 0))
		{
			print_no(i);
			_putchar(' ');
		}
	}
	_putchar('\n');
	return (0);
}

/**
 * print_no - prints an integer passed to it
 * @n: the integer to be printed
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
