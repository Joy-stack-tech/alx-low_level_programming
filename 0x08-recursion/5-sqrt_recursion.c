#include "main.h"
/**
 * sqrt2 - function used to evaluate from 1 to n
 * @a: same number as  n
 * @b: int that iterates from 1 to n
 *
 * Return: int
*/
int sqrt2(int a, int b)
{
	if (a * a == b)
		return (a);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integer of which square root would be found
 *
 * Return: natural square root or -1
*/
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
