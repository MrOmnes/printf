#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>

int _printf(const char *format, ...)
{
	search_type_t format_of_char[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_char_pointer},
		{NULL, NULL}
	};
	int index1 = 0, index2 = 0, i = 0;
	va_list args;

	va_start(args, format);

for (i = 0; format[i] >= 32 && format[i] <= 126 && format[i]; i++)
	{
		if (format[i] != 37)
		{
			_putchar(format[i]);
		}
		else
		{
			if (format[i] == 37)
			{
				if (format[i + 1] == 105)
					format_of_char[1].f(args);
				if (format[i + 1] == 100)
					format_of_char[1].f(args);
				if (format[i + 1] == 37)
					_putchar('%');
			}

			while (format && format[index1])
			{
				while (format_of_char[index2].type)
				{
					if (format[index1] == *format_of_char[index2].type)
						{
							format_of_char[index2].f(args);
						}
					index2++;
				}
				index1++;
				index2 = 0;
			}
		}
	}
	va_end(args);
	printf("\n");
	return (0);
}


/**
 * print_char - print char
 * @args: arg to print
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}


/**
 * print_integer - print integer
 * @args: arg to print
 */

void print_integer(va_list args)
{
	printf("%d", va_arg(args, int));
}


/**
 * print_float - print float
 * @args: arg to print
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}


/**
 * print_char_pointer - print string
 * @args: arg to print
 */

void print_char_pointer(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}