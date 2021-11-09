#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>

int _printf(const char *format, ...)
{
	search_type_t format_of_char[] = {
		{"c", print_char},
		{"i", print_integer},
		{"d", print_integer},
		{"f", print_float},
		{"s", print_char_pointer},
		{NULL, NULL}
	};
	int i = 0;
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
					format_of_char[1].f(args), i++;
				if (format[i + 1] == 100)
					format_of_char[2].f(args), i++;
				if (format[i + 1] == 99)
					format_of_char[0].f(args), i++;
				if (format[i + 1] == 115)
					format_of_char[4].f(args), i++;
				if (format[i + 1] == 37)
					_putchar('%'), i++;
			}
		}
	}
	va_end(args);
	printf("\n");
	return (_strlen(format));
}


/**
 * print_char - print char
 * @args: arg to print
 */

void print_char(va_list args)
{
	char c = va_arg(args, int);
	_putchar(c);
}


/**
 * print_integer - print integer
 * @args: arg to print
 */

void print_integer(va_list args)
{
	int i = va_arg(args, int);
	print_number(i);
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
	char c = va_arg(args, int);

	if (str == NULL)
	{
		return;
	}
	_putchar(c);
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

/**
 * _strlen - Compte le nombre de caractere d'une chaine
 *
 * @s: variable
 *
 * Return: (i)
 */
int _strlen(const char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}

/**
 * print_number - afficher des nombres entiers
 *
 * @n: variable
 */
void print_number(int n)
{
	unsigned int i = 0;
	unsigned int number_in_n;
	unsigned int j = 1;

	if (n == 0)
		_putchar(48);
	else
	{
		if (n < 0)
		{
			_putchar('-'), n = n * (-1);
		}
		number_in_n = n;
		while (number_in_n > 0)
		{
			i++;
			number_in_n = number_in_n / 10;
		}
		while (i > 1)
		{
			j = j * 10;
			i--;
		}
		while (j > 0)
		{
			_putchar((n / j) % 10 + 48);
			j = j / 10;
		}
	}
}
