#include <stdio.h>

/**
 * main - code execution starts
 *
 * Return: always 0 by default
 */

int main(void)
{
	for (int n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
