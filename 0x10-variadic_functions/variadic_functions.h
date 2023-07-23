#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_no(int s);
int _putchar(char c);
void print_string(va_list arguments);
void print_float(va_list arguments);
void print_int(va_list arguments);
void print_char(va_list arguments);

typedef struct typeprint
{
	char *type_p;
	void (*function)(va_list);
} typeprint_t;

#endif
