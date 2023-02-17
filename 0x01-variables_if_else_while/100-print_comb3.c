#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int n;

	for (n = 0 ; n <= 89 ; n++)
	{
		if (n <= 9)
		{
			putchar('0');
			putchar(n + '0');
		}

		if (n > 9)
			putchar(n + '0');
		putchar(',');
		putchar(32);	
	}
	return (0);
}
