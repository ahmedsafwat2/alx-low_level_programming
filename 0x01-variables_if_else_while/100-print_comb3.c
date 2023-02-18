#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int n;
	int i;

	for (n = 0; n <= 8; n++)
	{
		for (i = 1; i <= 9; i++)
		{
			putchar('0' + n);
			putchar('0' + i);
			if ((n == 8 && i == 9) != 1)
			{
				putchar(',');
				putchar(32);
			}
		}
	}
	return (0);
}
