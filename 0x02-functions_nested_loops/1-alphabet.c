#include <stdio.h>

/**
 * main - entry point
 * Reaturn: eachtime 0 (successs)
 */

int main(void)
{
	char s;

	s = 'a';

	while (s <= 'z')
	{
		_putchar();
		s++;
	}
	_putchar("\n");
	return (0);
}
