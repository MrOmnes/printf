#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>


/**
 * search_type - Search type of format
 * @format: Arguments
 * Return: VOID
 */
void(*search_type(char format))(va_list)
{
	int loop = 0;
	FILE * stdout;

	search_type_t format_of_char[] = {/*get function to call*/
	{"c", print_char},
	{"i", print_integer},
	{"d", print_integer},
	{"f", print_float},
	{"s", print_char_pointer},
	{"b", print_binary},
	{"u", print_unsigned},
	{"o", print_octal},
	{"x", print_hexadecimal},
	{NULL, NULL}};

	while (format_of_char[loop].type != NULL)
	{
		if (format_of_char[loop].type[0] == format)
		{
			return (format_of_char[loop].f);
		}
		loop++;
	}
	_putchar('%');
	_putchar(format);
	return (NULL);
}


/**
 * _printf - Print what we want to print
 * @format: Arguments
 * Return: Length of Arguments
 */
int _printf(const char * const format, ...)
{
	int i = 0;
	FILE * stdout;

	va_list args; /*declare une liste d'argument*/

	va_start(args, format); /*initialise args*/

	for (i = 0; format[i] >= 32 && format[i] <= 126 && format[i]; i++)
	{

		if (format[i] == 37)
		{
			if (format[i + 1] == 37) /*%*/
				_putchar('%'), i++;
			else
				search_type(format[i + 1])(args), i += 2;
		}
		if (format[i] != 37)
			_putchar(format[i]);
	}
	va_end(args);
	_putchar('\n');
	return (_strlen(format)); /*return la taille de format*/
}
