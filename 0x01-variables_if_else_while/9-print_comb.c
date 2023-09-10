#include <stdio.h>

/**
 * main - entry point
 * Return: eachtime 0 (success)
 */

int main(void)
{
	int y;

	y = 0;

	while
		(y < 10)
		{
			putchar(y + '0');
			if (y < 9)
			{
				putchar(',');
				putchar(' ');
			}
			y++;
		}
	putchar('\n');
	return (0);
}

