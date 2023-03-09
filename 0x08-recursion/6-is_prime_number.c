#include "main.h"

int pre_prime_number(int n, int i);

/**
 * is_prime_number - Function deermines whether a number
 * is a prime number or not
 * @n: number to to be evaluated
 * Return: returns 1 if n is a prime number or 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * pre_prime_number - function determines if a number is prime using recursion
 * @n: number to be evaluated
 * @i: integers to test
 * Return: returns 1 if n is prime or 0 if not
 */
int pre_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
