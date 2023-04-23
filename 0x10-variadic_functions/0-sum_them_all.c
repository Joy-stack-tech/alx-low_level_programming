#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - functions that adds and returns sum of pararmeters
 * @n: total arguments
 *
 * Return: 0 and the sum of the arguments
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list inc;
	unsigned int num;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(inc, n);

	for (num = 0; num < n; num++)
		sum += va_arg(inc, int);

	va_end(inc);

	return (sum);
}
