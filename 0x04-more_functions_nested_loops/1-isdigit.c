#include "main.h"

/**
 * _isdigit - checks if c is a digit
 * @c: the digit
 *
 * Return: 0 if not, 1 if true
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
