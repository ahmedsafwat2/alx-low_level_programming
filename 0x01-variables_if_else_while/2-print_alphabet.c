#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'main functition print lower case'
 *
 * Return Always 0 (succes)
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
