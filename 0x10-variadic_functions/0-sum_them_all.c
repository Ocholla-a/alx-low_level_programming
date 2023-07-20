#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all the numbers passed to it
 * @n: the number of numbers passed to it
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list arr;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(arr, n);
	for (i = 0 ; i < n ; i++)
	{
		sum += va_arg(arr, int);
	}
	va_end(arr);
	return (sum);
}

