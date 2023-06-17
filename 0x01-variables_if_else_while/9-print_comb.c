#include <stdio.h>

/**
 * main - code execution starts
 *
 * Return: always 0 by default
 */

int main(void)
{
	for (int n = 0; n < 10 ; n++)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
