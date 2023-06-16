#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - code execution starts
 *
 * Return: 0 success
 */

int main(void)
{
	srand(time(0));
	int n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
