#include "main.h"

/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * rone = row, cone = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int i, j, r;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			r = i * j;
			if (!(j == 0))
			{
				if (r < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + r);
				}
			else if (r >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + r / 10);
					_putchar('0' + r % 10);
				}
			}
	}
		_putchar('\n');
	}
}
