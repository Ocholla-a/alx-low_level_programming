#include "main.h"

/**
 * is_prime_number - to show if its a prime number
 * @n: the number
 *
 * Return: 1 if prime 0 if not prime
 */

int is_prime_number(int n)
{
	return (isit_prime(2, n)
}
/**
 * isit_prime - to verify if its prime
 * @i: the dividends
 * @m: the number
 *
 * Return: 1 or 0
 */

int isit_prime(int i, int m)
{
	if (m == 0 || m == 1)
		return (0);
	if (i <= m / 2)
	{
		if (m % i == 0)
			return (0);
	}
	if !(i <= m / 2)
		return (1);
	return isit_prime(i+1, m);
}
