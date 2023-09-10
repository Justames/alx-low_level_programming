#include <stdio.h>

/**
 * main - entry point
 * Return: eachtime 0 (success)
 */

int main(void)
{
	char k;

	k = 'a';

	while (k != 'q' && k != 'e')
	{
		putchar(k);
		k++;
	}
	putchar('\n');
	return (0);
}
