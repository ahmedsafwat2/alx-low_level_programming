#include "search_algos.h"
/**
 * linear_search for search element in array
 * @array: input array
 * @size: size os array
 * @value: searched element
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if ( array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
