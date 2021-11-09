#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{

	int len;
    int len2;
    unsigned int ui;
    void *addr;

	_printf("%%");
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui); /* Todo : Unsigned int */
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui); /* Todo : Unsigned Octal */
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);  /* Todo : Unsigned Hexadecimal */
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H'); /* Ressort un C ?! -- Il faut qu'on vérifie le type c */
    printf("Character:[%c]\n", 'H'); /* Ressort un H ?! -- Il faut qu'on vérifie le type c */
    _printf("String:[%s]\n", "I am a string !"); /* Todo : String */
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr); /* Todo : Adress */
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len); /* Notre Printf = 13 ? */
    printf("Len:[%d]\n", len2); /* Vraie printf = 12 */
    _printf("Unknown:[%r]\n"); /* Todo unknow ? (don't remove the % and print it) */
    printf("Unknown:[%r]\n");
    return (0);
}