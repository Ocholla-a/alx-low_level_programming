#include "main.h"

/**
 * _pow_recursion - return the value of a number raised to a power
 * @x: the number
 * @y: the power
 *
 * Return: -1 0r 1
 */

int _pow_recursion(int x, int y)
{
	int pow;
	pow = 1;

	if (y < 0)
		return (-1);
	if (y > 0)
	{
		pow = pow * x;
		y--;
	}
	else
		return (1);
}
