#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, sum = 1;
	int i = 0, j, h;

	if (!b)
		return (0);
	while (b[i])
		i++;
	i--;
	for (j = i; j >= 0; j--)
	{
		sum = 1;
		if (b[j] < '0' || b[j] > '1')
			return (0);
		if (b[j] == '1')
		{
			for (h = 1; h <= (i - j); h++)
				sum = sum * 2;
			result = result + sum;
		}
	}
	return (result);
}
