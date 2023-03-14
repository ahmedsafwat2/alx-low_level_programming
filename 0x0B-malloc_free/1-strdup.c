#include <stdio.h>
#include <string.h>
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
	int i, h;

	if (str == NULL)
		return (NULL);
	else
	{
		h = strlen(str);
		g = malloc(sizeof(*g) * h);
		for (i = 0; i <= h; i++)
		{
			g[i] = str[i];
		}
	}
	return (g);
}

