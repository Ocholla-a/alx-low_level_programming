#include <stdio.h>
#include "main.h"

/**
 * main - code execution starts
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0
 */

int main(int argc, char *argv)
{
	int count;

	for (count = 0 ; count < argc ; count++)
	{
		printf("%s\n", argv[count]);
	}
	return(0);
}
