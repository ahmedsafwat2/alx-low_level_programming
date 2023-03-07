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

	while (*haystack != '\0')
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (haystack[i] != needle[i])
			{
				j = 0;
				haystack++;
				break;
			}
			else
			{
				j = 1;
			}
		}
		if (j == 1)
		{
			return (haystack);
		}
	}
	return ('\0');
}
