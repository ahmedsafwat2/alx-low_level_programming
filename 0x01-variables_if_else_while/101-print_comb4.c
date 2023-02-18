
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
	int j;

	for (n = 0; n <= 7; n++)
	{
		for (i = n + 1; i <= 8; i++)
		{
			for (j = i + 1; j <= 9; j++)
			{
				putchar('0' + n);
				putchar('0' + i);
				putchar('0' + j);
				if ((n == 7 && i == 8 && j == 9) != 1)
				{
					putchar(',');
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
