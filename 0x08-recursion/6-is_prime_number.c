#include "main.h"

int find_prime(int n, int i);

/**
 * is_prime_number - check if a number is prime
 * @n: the number to check
 *
 * Return: 1 if the number is prime 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (find_prime(n, n - 1));
}

/**
 * find_prime - check the rest
 * @n: the dividante
 * @i: the divider
 *
 * Return: 0 is
 */
int find_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if ((n % i) == 0)
		return (0);
	return (find_prime(n, i - 1));
}

