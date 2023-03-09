
#include "main.h"

int prime(int n, int i);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	char s = 1;
	if (n < 2)
		return (0);
	s = s & prime(n, .5 * n);
	return (s);
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int prime(int n, int i)
{
	if (i > 1)
	{
		if (n % i == 0)
			return (0);
		return (prime(n, i - 1));
	}
}
