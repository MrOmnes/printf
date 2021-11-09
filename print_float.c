#include "main.h"

/**
 * print_float - print float
 * @args: arg to print
 */

void print_float(va_list args) /*Fonction qui affiche l'argument de type float*/
{
	printf("%f", va_arg(args, double));
}
