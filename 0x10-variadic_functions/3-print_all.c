#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: liust of argument types passed to a function
 * Return: nothing
*/
void print_all(const char * const format, ...)
{
	va_list inc;
	unsigned int j, cray;
	char *star;

	va_start(inc, format);
	j = 0;
	while (format != NULL && format[j] != '\0')
	{
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(inc, int));
				cray = 0;
				break;
			case 'i':
				printf("%i", va_arg(inc, int));
				cray = 0;
				break;
			case 'f':
				printf("%f", va_arg(inc, double));
				cray = 0;
				break;
			case 's':
				star = va_arg(inc, char*);
				if (star == NULL)
					star = " (nil)";
				printf("%s", star);
				break;
			default:
				j = 1;
				continue;
		}
		if (format[j + 1] != '\0' && cray == 0)
			printf(", ");
		j++;
	}

	printf("\n");
	va_end(inc);
}
