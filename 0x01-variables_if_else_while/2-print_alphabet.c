#include <stdio.h>

/**
 * main - Entry point
 *
 * return always 0 (succes)
 */

int main(void)
{
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
