#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	char *c;

	c = n;
	while (*n != '\0')
	{
		if (*n >= 'a' && *n <= 'z')
		{
			*n = *n - 32;
		}
		n++;
	}
	return (c);
}
