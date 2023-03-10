#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int t;

	while (str[longi] != '\0')
	{
		longi++;
	}
	for (t = 0; t < longi; t++)
	{
		if (t % 2 == 0)
		{
			_putchar(str[t]);
		}
	}
	_putchar('\n');
}
