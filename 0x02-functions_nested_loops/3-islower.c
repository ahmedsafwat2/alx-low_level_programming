#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * @c: single letter input
 * Return: 1 if int c is lowercase, 0 if otherwise
 */

int _islower(int c)
{
	char r;
	
	if (c >= 65 && c <= 90)
		r = 0;
	else if (c >= 97 && c <= 122)
		r = 1;
	return (r);
}
