#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main-entry point
 * return: eachtime 0 (success)
 */
int main(void)
{
	int n;
	int j;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("%s and is greater than 5\n", n);
	else if  (m == 0)
		printf("%S and is 0\n", n);
	else
		printf("%s and is less than 6 and is not 0\n", n);
	return (0);
}
