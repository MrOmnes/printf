#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>

int _printf(const char *format, ...)
{
	search_type_t format_of_char[] = {/*structure qui choisit la fonction à appeler*/
		{"c", print_char},
		{"i", print_integer},
		{"d", print_integer},
		{"f", print_float},
		{"s", print_char_pointer},
	  {NULL, NULL}};
	int i = 0;
	va_list args; /*declare une liste d'argument*/

	va_start(args, format); /*initialise args*/

	for (i = 0; format[i] >= 32 && format[i] <= 126 && format[i]; i++) /*Est ce que format[i] est affichable*/
	{
		if (format[i] != 37) /*si format[i] different %*/
		{
			_putchar(format[i]);
		}
		else
		{
			if (format[i] == 37)		  /*si format[i] = %*/
			{							  /*Quel est le type? integrer, char, string..*/
				if (format[i + 1] == 105) /*i*/
					format_of_char[1].f(args), i++;
				if (format[i + 1] == 100) /*d*/
					format_of_char[2].f(args), i++;
				if (format[i + 1] == 99) /*c*/
					format_of_char[0].f(args), i++;
				if (format[i + 1] == 115) /*s*/
					format_of_char[4].f(args), i++;
				if (format[i + 1] == 37) /*%*/
					_putchar('%'), i++;
			}
		}
	}
	va_end(args);
	printf("\n");
	return (_strlen(format)); /*return la taille de format*/
}
