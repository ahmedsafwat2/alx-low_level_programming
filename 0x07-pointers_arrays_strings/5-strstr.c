#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;
	char *n = haystack;

	while (*n != '\0')
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (n[i] != needle[i])
			{
				j = 0;
				n++;
				break;
			}
			else
			{
				j = 1;
			}
		}
		if (j == 1)
		{
			return (n);
		}
	}
	return (0);
}
