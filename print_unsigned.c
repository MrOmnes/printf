#include "main.h"

/**
 * print_unsigned - print unsigned
 * @args: arg to print
 */

void print_unsigned(va_list args) /*Fonction qui print l'argument de type int*/
{
	int i = va_arg(args, int);

	print_number_unsigned(i);
}
