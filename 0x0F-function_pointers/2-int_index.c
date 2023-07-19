#include "function_pointers.h"

/**
 * int_index - searches for an integer passed to it.
 * @array: the array of integers
 * @size: the size of the array of integers
 * @cmp: pointer to functions
 *
 * Return: index of first integer that matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, n, temp;
	
	if (size <= 0)
		return (-1);
	for (i = 0 ; i < size ; i++)
	{
		n = (*cmp)(array[i]);
		if (n == 1)
			temp = i;
	}
	return (temp % 10);
}
