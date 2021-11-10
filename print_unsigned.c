#include "main.h"

/**
 * print_unsigned - print unsigned
 * @args: arg to print
 */

int print_unsigned(va_list args) /*Fonction qui print l'argument de type int*/
{
	int i = va_arg(args, int);

	print_number_unsigned_int(i);

	return (0);
}
