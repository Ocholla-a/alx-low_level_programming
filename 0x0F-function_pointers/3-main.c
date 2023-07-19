#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - code execution starts
 * @argc: number of arguments passed
 * @argv: array of strings of argumentas passed
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i, n;

	if (argc == 4)
	{
		i = atoi(argv[1]);
		n = atoi(argv[3]);
		if (((*argv[2] == '/') || (*argv[2] == '%')) && (*argv[3] == 0))
			exit(100);
		if ((get_op_func(argv[2]) == NULL) || (strlen(argv[2]) != 1))
		{
			printf("Error\n");
			exit(99);
		}
		printf("%d\n", (*get_op_func(argv[2]))(i, n));
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
