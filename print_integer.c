#include "main.h"

/**
 * print_integer - print integer
 * @args: arg to print
 */

void print_integer(va_list args) /*Fonction qui affiche l'argument de type int*/
{
	int i = va_arg(args, int);
	print_number(i);
}
