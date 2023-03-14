#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *g;
	int i, h, j, c = 0;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s1 = "";
	h = strlen(s1);
	j = strlen(s2);
	g = malloc(sizeof(*g) * (h + j + 1));
	if (g == NULL)
		return (NULL);
	for (i = 0; i < h; i++)
	{
		g[c] = s1[i];
		c++;
	}
	for (i = 0; i < j; i++)
	{
		g[c] = s2[i];
		c++;
	}
	g[c] = '\0';
	return (g);
}
