#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, count = 0;

	for ( ; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				counter++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (counter);
		}
	}
	return (counter);
}
