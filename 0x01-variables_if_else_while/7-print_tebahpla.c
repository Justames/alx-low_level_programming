#include <stdio.h>

/**
 * main - entry point
 * Return: eachtime 0 (success)
 */

int main(void)
{
	char w;

	w = 'z';
	for (w <= 'z'; w--)
		putchar(w);
	putchar('\n');
	return (0);
}
