#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int n;

	for (n = 0 ; n <= 15 ; n++)
	{
		if (n <= 9)
			putchar('0' + n);
		if (n > 9)
			putchar('W' + n);

	}
	putchar('\n');
	return (0);
}
