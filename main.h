#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct search_type - Struct searchtype
 *
 * @type: The type we search
 * @f: function assiciated
 */
typedef struct search_type /*structure de base*/
{
	char *type;  /*represente le type (1ere colonne)*/
	void (*f)(va_list); /*pointeur sur fonction *f (deuxieme colonne)*/
} search_type_t; /*equivalent de l'alias*/
 
int _printf(const char *format, ...);
void print_char(va_list args);
void print_integer(va_list args);
void print_float(va_list args);
void print_char_pointer(va_list args);
int _putchar(char c);
int _strlen(const char *s);
void print_number(int n);
void print_binary(va_list args);
void print_number_unsigned(int n);
void print_unsigned(va_list args);
void print_octal(va_list args);
void print_hexadecimal(va_list args);

#endif