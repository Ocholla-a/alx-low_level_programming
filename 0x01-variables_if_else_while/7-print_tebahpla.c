#include <stdio.h>

/**
 * main - code execution starts
 *
 * Return: 0 (success)
 */

int main(void)
{
	for (char ch = 'z' ; ch >= 'a' ; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
