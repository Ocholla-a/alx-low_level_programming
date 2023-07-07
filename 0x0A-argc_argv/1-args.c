#include <stdio.h>
#include "main.h"

/**
 * main - code execution starts
 * @argc: number of command arguments
 * @argv: array of command line arguments
 *
 * Return: 0
 */

int main(int argc, char __attribute__ ((unused)) **argv)
{
	printf("%d\n", argc - 1);
	return(0);
}
