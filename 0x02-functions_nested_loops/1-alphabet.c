#include "main.h"
#include "_putchar.c"
#include "1-main.c"

void print_alphabet(void);

/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - prints the alphabet in lower case followed by a new line
 *
 *
 * Return: void
 */

void print_alphabet(void)
{
	for (char ch = 'a' ; ch <= 'z' ; ch++)
		putchar(ch);
	putchar('\n');
}
