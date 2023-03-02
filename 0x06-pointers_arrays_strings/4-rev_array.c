#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, k;
	int *z;

	z = a;
	k = n / 2;
	for (i = 0; i < k; i++)
	{
		int temp;

		temp = z[i];
		z[i] = z[n - 1 - i];
		z[n - 1 - i] = temp;
	}
}

