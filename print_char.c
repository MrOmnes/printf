#include "main.h"

/**
 * print_char - print char
 * @args: arg to print
 */

void print_char(va_list args) /*Fonction qui affiche l'argument de type char*/
{
	char c = va_arg(args, int);
	_putchar(c);
}
