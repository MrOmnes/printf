
#include "main.h"

void print_hexadecimal(va_list args)
{
   unsigned int num = va_arg(args, unsigned int);
   int i = 0;
   char s[90];
   for (i = 0; num > 0; i++)
   {
    s[i] = num % 16;
		if (s[i] < 10)
			s[i] = 48 + num;
		else
			s[i] = 55 + num;
	num = num / 16;
   }
	for (i = i -1; i >= 0; i--)
		    _putchar(s[i]);
}