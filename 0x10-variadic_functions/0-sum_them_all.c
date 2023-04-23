#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - functions that adds and returns sum of pararmeters
 * @n: total arguments
 * @...: a variable number of parameters to be summed
 *
 * Return: 0 and the sum of the arguments
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list valist;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
