#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, i = 0;
	int j;

	if (b == NULL)
		return (0);
	while (b[i])
		i++;
	i--;
	for (j = i; j >= 0; j--)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		if (b[i] == '1')
		{
			result = result + pow(2, (i - j));
		}
	}
	return (result);
}
