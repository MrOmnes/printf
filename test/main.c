#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

/* to compile, use command : gcc -Wall -pedantic -Werror -Wextra -std=gnu89 test/1-main.c *.c -o _printf */
int main(void)
{
    char *str = "bonjour\n";
    int d = 123456789;
    unsigned int ui;
    int len2, len;
    void *addr;
    int nombre = 123;

    addr = (void *)0x7ffe637541f0;

    _printf("Let's try to printf a simple sentence.\n");
    printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;

/*test the simple sentence*/
    len = _printf("Let's try to printf %% a simple sentence.\n");
    printf("len = : %d, %i\n", len, len);
    _printf("len = : %d, %i\n", len, len);
    _printf("Let's try to printf %% a simple sentence.\n");
    printf("Let's try to printf a simple sentence.\n");
    _printf("vtbh;v!jkj!:*;,^$rg'thçé_oi&éz\n");
    printf("vtbh;v!jkj!:*;,^$rg'thçé_oi&éz\n");
    len = printf("Percent:[%]\n");
    len2 = printf("Percent:[%]\n");
    _printf("Ceci est un [%0 test [%]\n test");
    len = _printf("Percent:[%]\n");
    len2 = _printf("Percent:[%]\n");


/*test the string %s*/
    _printf("%s", str);
    printf("%s", str);
    str = "vtbh;v!jkj!:*;,^$r4656g'thçé_oi&éz\n";
    _printf("%s", str);
    printf("%s", str);

/*test the integer %d and %i*/
    _printf("Length:[%d, %i]\n", len2, len2);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("%i\n", d);
    printf("%i\n", d);
    len = _printf("%i\n", d);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len, len);
    _printf("%i\n", len2);
    printf("%i\n", len2);
    _printf("%i, %d\n", -d, -d);
    printf("%i, %d\n", -d, -d);

/*test the binary %b*/
    _printf("%b\n", 98);
    _printf("%b\n", 2147483646);
    _printf("%b\n", 4294967295);
    _printf("%b\n", 0);
    _printf("%b\n", 1);
    _printf("%b\n", 100);
    _printf("%b\n", 2);
    _printf("%b\n", -1);

/*test the percent %%*/
    _printf("bonjour%%tout%%le%%monde%%\n");
    printf("bonjour%%tout%%le%%monde%%\n");

/*test the octal %o*/
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned octal:[%o]\n", 345678);
    printf("Unsigned octal:[%o]\n", 345678);
    _printf("Unsigned octal:[%o]\n", 98765456);
    printf("Unsigned octal:[%o]\n", 98765456);
    _printf("Unsigned octal:[%o]\n", 2147483646);
    printf("Unsigned octal:[%o]\n", 2147483646);

    printf("\n");
    len = printf("Unsigned octal:[%o]\n", 2147483646);
    len2 = printf("Unsigned octal:[%o]\n", 2147483646);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    printf("\n");

    _printf("Unsigned octal:[%o]\n", 0);
    printf("Unsigned octal:[%o]\n", 0);
    _printf("Unsigned octal:[%o]\n", 1);
    printf("Unsigned octal:[%o]\n", 1);

/*test the unsigned decimal integer %u*/
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned:[%u]\n", 345678);
    printf("Unsigned:[%u]\n", 345678);
    _printf("Unsigned:[%u]\n", 98765456);
    printf("Unsigned:[%u]\n", 98765456);
    _printf("Unsigned:[%u]\n", 2147483646);
    printf("Unsigned:[%u]\n", 2147483646);
    _printf("Unsigned:[%u]\n", 0);
    printf("Unsigned:[%u]\n", 0);
    _printf("Unsigned:[%u]\n", 1);
    printf("Unsigned:[%u]\n", 1);
    _printf("Unsigned:[%u]\n", -1);
    printf("Unsigned:[%u]\n", -1);
    _printf("Unsigned:[%u]\n", -2147483646);
    printf("Unsigned:[%u]\n", -2147483646);

/*test the unsigned hexadecimal %x*/
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", 345678, 345678);
    printf("Unsigned hexadecimal:[%x, %X]\n", 345678, 345678);
    _printf("Unsigned hexadecimal:[%x, %X]\n", 98765456, 98765456);
    printf("Unsigned hexadecimal:[%x, %X]\n", 98765456, 98765456);
    _printf("Unsigned hexadecimal:[%x, %X]\n", 2147483646, 2147483646);
    printf("Unsigned hexadecimal:[%x, %X]\n", 2147483646, 2147483646);
    _printf("Unsigned hexadecimal:[%x, %X]\n", 0, 0);
    printf("Unsigned hexadecimal:[%x, %X]\n", 0, 0);
    _printf("Unsigned hexadecimal:[%x, %X]\n", 1, 1);
    printf("Unsigned hexadecimal:[%x, %X]\n", 1, 1);
    _printf("Unsigned hexadecimal:[%x, %X]\n", -1, -1);
    printf("Unsigned hexadecimal:[%x, %X]\n", -1, -1);
    _printf("Unsigned hexadecimal:[%x, %X]\n", -2147483646, -2147483646);
    printf("Unsigned hexadecimal:[%x, %X]\n", -2147483646, -2147483646);

/*test the unsigned hexadecimal %x*/
    _printf("%S\n", "Best\nSchool");
    _printf("%S\n", "Best'2'School\2\3\1\6\4\4\4\14\30\31\32\33\34\35\36\55");
    _printf("%S\n", "Be\6st Sc\1hool");

/*test the address %p*/
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    addr = (void *)0x11104ffe637542f0;
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    addr = (void *)0x0000000fe001a;
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    addr = (void *)0x1000000142f0;
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);

/*test the flag + and -*/
    printf("c'est%+7dça\n", nombre);
  /*  _printf("c'est%+7dça\n", nombre);
    printf("c'est%-7dça\n", nombre);
    printf("c'est%+12dça\n", 1);
    printf("c'est%+12dça\n", -1);
    printf("c'est%-12dça\n", 1);
    printf("c'est%-12dça\n", -1);*/

    _printf("Unknown:[%r]\n");




/*test the integer %d and %i*/
    _printf("Length:[%d, %i]\n", len2, len2);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("%i\n", d);
    printf("%i\n", d);
    len = _printf("%i\n", d);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len, len);
    _printf("%i\n", len2);
    printf("%i\n", len2);
    _printf("%i, %d\n", -d, -d);
    printf("%i, %d\n", -d, -d);
    _printf("int:[%d, %i]\n", INT_MAX, INT_MAX );
    printf("int:[%d, %i]\n", INT_MAX, INT_MAX );
    _printf("int:[%d, %i]\n", INT_MIN, INT_MIN);
    printf("int:[%d, %i]\n", INT_MIN, INT_MIN);
    _printf("int:[%d, %i]\n", -348, -348);
    printf("int:[%d, %i]\n", -348, -348);
    len = printf("Length:[%d, %i]\n", INT_MIN, INT_MIN);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len, len);
    _printf("int:[%d, %i]\n", -1, -34);
    printf("int:[%d, %i]\n", -1, -34);






	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
    printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	_printf("%b\n", 98);
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	/**printf("Unknown:[%r]\n");*/




    return (0);
}