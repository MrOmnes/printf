#include "main.h"

/**
 * print_char_pointer - print string
 * @args: arg to print
 */
void print_char_pointer(va_list args) /*Fonction qui affiche l'argument de type char poiteur*/
{
	char *str = va_arg(args, char *);
	char c = va_arg(args, int);

	if (str == NULL)
	{
		return;
	}
	_putchar(c);
}
