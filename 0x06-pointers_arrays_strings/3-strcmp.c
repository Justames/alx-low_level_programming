#include "main.h"
<<<<<<< HEAD

/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[i] - s2[i]
=======
/**
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equals,
 * another number if not.
>>>>>>> 3c98b49b68ebe753d28626db2f63362c55f17d41
 */

int _strcmp(char *s1, char *s2)
{
<<<<<<< HEAD
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i];
		}
		i++;
	}
	return (0);
=======
	int i = 0, op = 0;

	while (op == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		op = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (op);
>>>>>>> 3c98b49b68ebe753d28626db2f63362c55f17d41
}
