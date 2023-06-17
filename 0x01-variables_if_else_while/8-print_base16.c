#include <stdio.h>

/**
 * main- code execution starts
 *
 * Return: 0 (success)
 */

int main(void)
{
	for (int n = 0 ; n < 10 ; n++)
		putchar(n);
	for (char ch = 'a' ; ch < 'g' ; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
