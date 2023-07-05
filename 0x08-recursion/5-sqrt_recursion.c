#include "main.h"

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: the number
 *
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	int i;

	i = 0;
	if (i < (n / 2))
	{
		if ((i * i) != n)
		{
			_sqrt_recursion(i++);
		}
	}
	return (i);
}
