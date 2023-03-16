#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int x, y, i, c = 0;

	x = strlen(s1);
	y = strlen(s2);
	if (n >= y)
		n = y;
	s = malloc(x + n);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < x; i++)
	{
		s[c] = s1[i];
		c++;
	}
       	for (i = 0; i < n; i++)
	{
		s[c] = s2[i];
		c++;
	}
	s[c] = '\0';
	return (s);
}
