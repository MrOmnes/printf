#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>

/**
 * struct searchtype - Struct searchtype
 *
 * @typeOf: The type we search
 * @f: The function associated
 */
typedef struct search_type
{
	char *type;
	void (*f)(va_list);
} search_type_t;

int _printf(const char *format, ...);
void print_char(va_list args);
void print_integer(va_list args);
void print_float(va_list args);
void print_string(va_list args);

#endif