#include "main.h"
<<<<<<< HEAD

/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
=======
/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array.
 * @n: number of elements of the array.
 * Return: no return.
>>>>>>> 3c98b49b68ebe753d28626db2f63362c55f17d41
 */

void reverse_array(int *a, int n)
{
<<<<<<< HEAD
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
=======
	int i, j, temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
>>>>>>> 3c98b49b68ebe753d28626db2f63362c55f17d41
	}
}
