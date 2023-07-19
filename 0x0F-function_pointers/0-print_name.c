#include "function_pointers.h"
#include <string.h>

/**
 * print_name - prints an array passed to it
 * @name: the name passed to it
 * @f: pointer to a function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
