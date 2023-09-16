#include "main.h"

/**
 * print_numbers - print 0 - 9
 * Return: void
 */

void print_numbers(void)
{
	char a;
	a = '0';
	while (a <= '9' && a >= '0')
	{
		a++;
		_putchar(a);
	}
	_putchar('\n');
}
