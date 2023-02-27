#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int len;
	int i;

	len = _strlen(str);
	for (i = len; i >= 0; i--)
	{
		_putchar(*(s + i);
		s++;
	}
	_putchar('\n');
}
