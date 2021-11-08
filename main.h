#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
void print_char(va_list listFormat);
void print_integer(va_list listFormat);
void print_float(va_list listFormat);
void print_string(va_list listFormat);


/**
 * struct searchtype - Struct searchtype
 *
 * @typeOf: The type we search
 * @f: The function associated
 */
typedef struct whattype
{
	char *a;
	void (*f)(va_list);
} choice;

#endif