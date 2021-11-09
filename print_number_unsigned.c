#include "main.h"

/**
 * print_number - afficher des nombres entiers
 *
 * @n: variable
 */
void print_number_unsigned(int n)
{
	unsigned int i = 0;
	unsigned int number_in_n;
	unsigned int j = 1;

	if (n == 0)
		_putchar(48);
	else
	{
		number_in_n = n;
		while (number_in_n > 0)
		{
			i++;
			number_in_n = number_in_n / 10;
		}
		while (i > 1)
		{
			j = j * 10;
			i--;
		}
		while (j > 0)
		{
			_putchar((n / j) % 10 + 48);
			j = j / 10;
		}
	}
}
