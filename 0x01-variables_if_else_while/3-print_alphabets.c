#include <stdio.h>

/**
 * main - entry point
 * Return: eachtime 0 (succes)
 */

int main(void)
{
	char c;

	char k;

	c = 'a';

	k = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (k <= 'Z')
	{
		putchar(k);
		k++;
	}
	return (0);
}


