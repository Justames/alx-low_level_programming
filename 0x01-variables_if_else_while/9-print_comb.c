#include <stdio.h>

/**
 * main - entry point
 * Return: eachtime 0 (success)
 */

int main(void)
{
	int y;

	y = 0;

	for (y <= 9; y++)
	{
		putchar(y + '0');
		if (y < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

