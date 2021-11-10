#include "stdafx.h"

int main()
{
   int num = 11, i = 10;
   char s[10];
   while (num != 0)
   {
      if (num % 2 == 0)
      {
         num = num / 2;
         s[i - 1] = 0;
         i = i - 1;
      }
      if (num % 2 == 1)
      {
         num = (num - 1) / 2;
         s[i - 1] = 1;
         i = i - 1;
      }
      return s[10];
   }
   printf("\n %s", s[10]);
   getchar();
   return 0;
}
Omnes — Today at 3:49 PM
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>

<<<<<<< HEAD
void (*search_type (char format))(va_list)
{
    int loop = 0;

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
            return(format_of_char[loop].f);
        }
        loop++;
    }
    _putchar('%');
    _putchar(format);
    return (NULL);
}

int _printf(const char * const format, ...)
{
    int i = 0;
=======

/**
 * search_type - Search type of format
 * @format: Arguments
 * Return: VOID
 */
void(*search_type(char format))(va_list)
{
	int loop = 0;

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
	int length = _strlen(format);

	va_list args; /*declare une liste d'argument*/
>>>>>>> bf03524ef36a19061a6a922102a8bd795fab1064

    va_list args; /*declare une liste d'argument*/
    va_start(args, format); /*initialise args*/

<<<<<<< HEAD
    for (i = 0; format[i] >= 32 && format[i] <= 126 && format[i]; i++)
    {
        if (format[i] == 37)
        {
            i++;
            search_type(format[i])(args);
        }
        if (format[i + 1] == 37) /*%*/
            _putchar('%'), i++;
        if (format[i] != 37)
            _putchar(format[i]), i++;
    }
    va_end(args);
    _putchar('\n');
    return (_strlen(format)); /*return la taille de format*/
=======
	for (i = 0; format[i] >= 32 && format[i] <= 126 && format[i]; i++)
	{

		if (format[i] == 37)
		{
			if (format[i + 1] == 37) /*%*/
				_putchar('%'), i++, length--;
			else
				search_type(format[i + 1])(args), i += 2;
		}
		if (format[i] != 37)
			_putchar(format[i]);
	}
	va_end(args);
	_putchar('\n');
	return (length); /*return la taille de format*/
>>>>>>> bf03524ef36a19061a6a922102a8bd795fab1064
}
