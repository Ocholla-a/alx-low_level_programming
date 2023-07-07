#include <stdio.h>
#include <string.h>
#include "main.h"
#include <ctype.h>

int convert(char *s);

/**
 * main - code execution starts
 * @argc: number of command arguments
 * @argv: array of command arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int n[99], i, count, sum;

	count = 0;
	if (argc < 2)
		sum = 0;
	else if (argc > 2)
	{
		for (i = 1 ; i < argc ; i++)
		{
		/*	if (argv[i] == 'e')
			{
			printf("Error\n");
			return (1);
			}*/
			n[i - 1] = convert(argv[i]);
			count++;
		}
		for (i = 0 ; i < count ; i++)
		{
			sum += n[i];
		}
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * convert - changes a string to integer
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
		if (s[i] == 'e')
		{
			printf("Error\n");
			break;
		}
		num = num * 10 + (s[i] - 48);
	}
	return (num);
}
