#include <stdio.h>

/**
 * main - entry point
 * Return: eachtime 0 (success
 */

int main(void)
{
	char l;

	char n;

	l = 'a';
	n = 'A';
	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	while (n <= 'Z')
	{
		putchar(n);
		n++;
	}
	putchar(\n);
	return (0);
}

