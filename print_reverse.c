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

	if (str)
	{
		c = _strlen(str);
	}

	while (c >= 0 && str != NULL)
	{
		_putchar(str[c]);
		c--;
	}

	if (str == NULL)
	{
		str = "(null)";
		c = 0;

		while (str[c])
		{
			_putchar(str[c]);
			c++;
		}
	}

	return (_strlen(str));
}
