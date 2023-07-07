#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int convert(char *s);
int mult(int n, int m);

/**
 * main - code execution starts
 * @argc: number of cli arguments
 * @argv: array of cli arguments
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int num1, num2;

	num1 = convert(argv[1]);
	num2 = convert(argv[2]);
	printf("%d\n", mult(num1, num2));
	return (0);
}

/**
 * mult - multiplies two numbers
 * @n: first number
 * @m: second number
 *
 * Return: the multiplication
 */

int mult(int n, int m)
{
	return (n * m);
}

/**
 * convert - convert string to integer
 * @s: the string
 * Return: the integer
 */

int convert(char *s)
{
	int i, n, num;

	num = 0;
	n = strlen(s);
	for (i = 0 ; i < n ; i++)
	{
		num = num * 10 + (s[i] - 48);
	}
	return (num);
}
