#include "variadic_functions.h"
/**
 * print_strings - function that prints strings
 * @n: length of unnamed int
 * @separator: serves as separator of other strings
 *
 * Return: 0
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list inc;
	char *star;
	unsigned int num;

	va_start(inc, n);
	if (separator == NULL)
		separator = "";

	for (num = 0; num < n; num++)
	{
		star = va_arg(inc, char*);
		if (star == NULL)
			star = "(nil)";
		printf("%s", star);
		if (num < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(inc);
}
