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

	while (c >= 0)
	{
		_putchar(str[c]);
		c--;
	}

	return (c);
}
