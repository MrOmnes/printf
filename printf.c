#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	choice whatFormat[] = {
			{"c", print_char},
			{"i", print_integer},
			{"f", print_float},
			{"s", print_string},
			{NULL, NULL}
			};
	int loop1 = 0, loop2 = 0;
	char *separator = "";

	va_start(args, format);

	while (format != NULL && format[loop1])
	{
		while (whatFormat[loop2].a != NULL)
		{
			if (format[loop1] == *whatFormat[loop2].a)
			{
				printf("%s", separator);
				separator = ", ";
				whatFormat[loop2].f(args);
			}
			loop2++;
		}
		loop1++;
		loop2 = 0;
	}

	printf("\n");
	va_end(args);
	return (0);
}

/**
 * print_char - Print a character
 *
 * @args: The va_list we want to print
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_integer - Print a integer
 *
 * @args: The va_list we want to print
 */
void print_integer(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Print a float
 *
 * @args: The va_list we want to print
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Print a string
 *
 * @args: The va_list we want to print
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}
