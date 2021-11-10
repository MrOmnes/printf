#include "main.h"

/**
* print_reverse - Print a text in reverse
*@args: Value to print
*Return: Lenght of args
*/
int print_reverse(va_list args)
{
	char *str = va_arg(args, char *);
	int c = _strlen(str);

	if (str == NULL)
	{
		str = "(null)";
		return (-1);
	}

	while (c >= 0 && str != NULL)
	{
		_putchar(str[c]);
		c--;
	}

	return (c);
}
