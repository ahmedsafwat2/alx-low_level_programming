#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int tho;
	int hun;
	int ten;
	int bas;

	for ( tho = 0 ; tho < 10 ; tho++)
	{	
		for (hun = 0 ; hun <= 10 ; hun++)
		{
			for (ten = tho ; ten < 10 ; ten++)
			{
				for ( bas = 0 ; bas < 10 ; bas++)
				{
					if (!(tho == 0 && hun == 0 && ten == 0 && bas == 0))
					{
						putchar('0' + tho);
						putchar('0' + hun);
						putchar(32);
						putchar('0' + ten);
						putchar('0' + bas);
					}
					if (!(tho == 9 && hun == 8))
					{
						putchar(',');
						putchar(32);
					}
					ten++;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
