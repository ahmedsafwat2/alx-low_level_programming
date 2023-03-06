#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	char *f = NULL;


	while (*s != '\0')
	{
		if (*s == c)
		{
			f = s;
			break;
		}
		s++;
	}
	return (f);
}
