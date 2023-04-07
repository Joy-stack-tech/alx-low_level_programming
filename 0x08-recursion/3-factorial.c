#include "main.h"
/**
 * factorial - returns a factorial of a number
 * @n: input whose factorial will be returned
 *
 * Return: int
*/
int factorial(int n)
{
	int i;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		i = n * factorial(n - 1);
	}
	return (i);
}
