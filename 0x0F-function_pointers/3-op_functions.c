#include "3-calc.h"

/**
 *  op_add - returns the sum of a and b
 *  @a: the first integer
 *  @b: the second integer
 *
 *  Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *  op_sub - returns the difference of a and b
 *  @a: the first integer
 *  @b: the second integer
 *
 *  Return: result of subtraction of b from a
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *  op_mul - returns the multiplication of a and b
 *  @a: the first integer
 *  @b: the second integer
 *
 *  Return: result of multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *  op_div - returns the division of a by b
 *  @a: the first integer
 *  @b: the second integer
 *
 *  Return: result of division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 *  op_mod - returns the remainder of a divided by b
 *  @a: the first integer
 *  @b: the second integer
 *
 *  Return: the modulus of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
