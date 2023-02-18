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
	int k;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 8; i++)
		{
			for (j = 0; j <= 9; j++)
			{
				for (k = 1; k <= 9; k++)
				{

					putchar('0' + n);
					putchar('0' + i);
					putchar('0' + j);
					if ((n == 9 && i == 8 && j == 9 && k == 9) != 1)
					{
						putchar(',');
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
