#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int s = n;

	if (index > 63)
		return (-1);
	s = s >> index;
	s = s & 1;
	return (s);
