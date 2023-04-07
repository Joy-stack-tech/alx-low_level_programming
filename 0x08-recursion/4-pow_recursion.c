#include "main.h"
/**
 * _pow_recursion - function that raises @x to the power of @y
 * @x: an integer
 * @y: power in which @x will be raised to
 *
 * Return: integer
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
	return (1);
	}
}
