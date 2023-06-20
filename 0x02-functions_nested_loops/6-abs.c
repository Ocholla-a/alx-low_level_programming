#include "main.h"

/**
 * _abs - determines absolute value of a number
 * n: number input
 *
 * Return: absolute value
 */

int _abs(int n)
{
	if (n < 0)
		return ((-1) * (n));
	else
		return (n);
}
