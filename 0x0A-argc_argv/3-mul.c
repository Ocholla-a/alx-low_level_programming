#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int mult(int n, int m);

/**
 * main - code execution starts
 * @argc: number of cli arguments
 * @argv: array of cli arguments
 * Return: 0
 */

int main(int argc, char *argv)
{
	int num1, num2;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf ("%d\n", mult(num1, num2));
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
