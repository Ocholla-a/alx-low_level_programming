#include "main.h"

/**
 * print_array - prints an array of numbers
 * @n: maximum number of numbers
 * @a: the array of numbers
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		if (i != n)
		{
			printf("%d, ", *a[i]);
		}
		else
			printf("%d", *a[i]);
	}
}
