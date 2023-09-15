#include "main.h"

/**
 * _isupper - -uppercase  letters
 * @c : char check
 * Return: eachtime 0 or 1
 */

int _isupper(int q)
{
	if (q >= 'A' && q <= 'Z')
		return 1;
	else
		return 0;
}
