#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter on 
 * each element of an array
 * @array: the given array
 * @size: the size of the array
 * @action: pointer to a function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0 ; i < size ; size++)
	{
		(*action)(array[i]);
	}
}
