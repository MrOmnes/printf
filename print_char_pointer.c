#include "main.h"

/**
 * print_char_pointer - print string
 * @args: arg to print
 */
int print_char_pointer(va_list args) /*Fonction qui affiche*/
{                                     /* l'argument de type char poiteur*/
	char *str = va_arg(args, char *);
	int i = _strlen(str);
	int charn = 0;

	if (str == NULL)
	{
		return (0);
	}

	while (i != 0)
	{
		i--;
		_putchar(str[charn]);
		charn++;
	}

	return (charn);
}
