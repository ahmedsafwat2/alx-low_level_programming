#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	for (i = len; i >= 0; i--)
	{
		_putchar(*(s + i));
		s++;
	}
	_putchar('\n');
}
