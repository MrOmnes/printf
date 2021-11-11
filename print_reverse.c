#include "main.h"

/**
* print_reverse - Print a text in reverse
*@args: Value to print
*Return: Lenght of args
*/
int print_reverse(va_list args)
{
	char *str = va_arg(args, char *);
	int c = 0;
	int length = 0;

	if (str)
	{
		c = _strlen(str);
	}

	if (str == NULL)
		str = "(null)";

	while (c >= 0 && str != NULL)
	{
		_putchar(str[c]);
		c--, length++;
	}

	return (length);
}
