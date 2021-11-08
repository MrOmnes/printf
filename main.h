#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include <stdarg.h>
#include <stddef.h>

/**
 * struct search_type - struct format
 * @type: the format of the char
 * @f: function assiciated
 */

int _printf(const char *format, ...);
void print_char(va_list args);
void print_integer(va_list args);
void print_float(va_list args);
void print_char_pointer(va_list args);


typedef struct search_type
{
	char *type;
	void (*f)(va_list);
} search_type_t;

#endif