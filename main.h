#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);

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