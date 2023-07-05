#include "main.h"

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: the number
 *
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	return (square(0, n));
}

/**
 * square - checks if it is the square root
 * @m: the square root
 * @k: the square
 *
 * Return: the square root
 */

int square(int m, int k)
{
	if (m * m == k)
		return (m);
	if (m * m > n)
		return (-1);
	return (square(m + 1, k));
}
