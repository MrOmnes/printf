#include "main.h"

void print_octal(va_list args)
{
   unsigned int num = va_arg(args, unsigned int);
   int i = 0;
   char s[90];
   for (i = 0; num > 0; i++)
   {
    s[i] = num % 8;
	num = num / 8;
   }
	for (i = i -1; i >= 0; i--)
		    _putchar(s[i] + 48);
}