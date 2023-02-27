#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	int len = 0;
	int i;
	int len2;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	len2 = len / 2;
	for (i = 1; i < len2; i++)
	{
		char c;
		
		c = *s;
		*s = *(s - (len - i);
		*(s - (len - i) = c;
	}
}
