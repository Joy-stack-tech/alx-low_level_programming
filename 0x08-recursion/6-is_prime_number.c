#include "main.h"
/**
 * check - function used to check a prime number
 * @a: integer
 * @b: integer
 *
 * Return: integer value
*/
int check(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (check(a + 1, b));
}

/**
 * is_prime_number - functions that evaluates a prime number
 * @n: integer considered
 *
 * Return: an integer value
*/
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
