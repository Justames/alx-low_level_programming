#include <stdio.h>

/**
 * main - entry point
 * Return: eachtime 0 (success)
 */

int main(void)
{
	int s;

	for (s = 0; s < 10; s++)
		putchar(s + '0');
	putchar('\n');
	return (0);
}
