#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers passed to it
 * @separator: a comma that separates the numbers
 * @n: the number of numbers passed
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arr;

	va_start(arr, n);
	for (i = 0 ; i < n ; i++)
	{
		if (i != n - 1)
		{
			printf("%d%s", va_arg(arr, int), separator);
		}
		else
			printf("%d\n", va_arg(arr, int));
	}
	va_end(arr);
}
