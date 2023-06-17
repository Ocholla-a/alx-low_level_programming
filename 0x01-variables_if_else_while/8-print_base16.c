#include <stdio.h>

/**
 * main- code execution starts
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n;
	char ch;

	for (n = 0 ; n < 10 ; n++)
		putchar(n);
	for (ch = 'a' ; ch <= 'f' ; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
