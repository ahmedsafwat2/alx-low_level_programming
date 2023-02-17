
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int n;

	for (n = 0 ; n <= 9 ; n++)
	{
		if (n < 9)
		{
			putchar('0' + n);
			putchar(',');
			putchar(' ');
		}
		if (n = 9)
			putchar('9$');
	}
	return (0);
}
