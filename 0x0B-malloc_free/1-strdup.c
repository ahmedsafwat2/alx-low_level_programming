#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *g;

	if (str == NULL)
		return (NULL);
	else
	{
		g = malloc(sizeof(*g) * strlen(str));
		for (i = 0; i <= strlen(str); i++)
		{
			g[i] = str[i];
		}
	}
	return (g);
}

