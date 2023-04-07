#include "main.h"
/**
 * sqrt2 - used to evaluate from 1 to n
 * @a: same number as  n
 * @b: int that iterates from 1 to n
 *
 * Return: 1
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
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 *
 * Return: on success 1
*/
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
