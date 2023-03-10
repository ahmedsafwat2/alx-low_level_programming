#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */

void print_alphabet_x10(void)
{
	char i = 1;

	while (i <= 10)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		i++;
		_putchar('\n');
	}
}
