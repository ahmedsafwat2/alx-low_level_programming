#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int counter = 0;
	int i;

	while (src[counter] != '\0')
	counter++;
	counter++;
	for (i = 0; i < counter; i++)
	{
		dest[i] = src[i];
	}
	return (src);
