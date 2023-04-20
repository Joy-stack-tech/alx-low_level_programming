#include "variadic_functions.h"
/**
 * sum_them_all - functions that adds and returns sum of pararmeters
 * @n: total arguments
 *
 * Return: the sum of the arguments
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list jo;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(jo, n);

	for (i = 0; i < n; i++)
		sum += va_arg(jo, int);

	va_end(jo);

	return (sum);
}
