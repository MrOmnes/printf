#include "main.h"

void print_binary(va_list args)
{
   int num = va_arg(args, int);
   int i = 0;
   char s[90];
   for (i = 0; num > 0; i++)
   {
    s[i] = num % 2;
	num = num / 2;
   }
	for (i = i -1; i >= 0; i--)
		    _putchar(s[i] + 48);
}