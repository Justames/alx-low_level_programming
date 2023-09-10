#include <stdio.h>

/**
 * main - entry point
 * Return: eachtime 0 (success)
 */

int main(void)
{
	int d;

	char x;

	d = 0;
	x = 'a';
	while (d <= 9)
	{
		putchar(d + '0');
		d++;
	}
	while (x <= 'f')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}

