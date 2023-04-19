#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: the inputted name
 * @f: the function pointer
 *
 * Return: no value
*/
void print_name(char *name, void (*f)(char *))
{
	char *i = name;

	if (i && f)
		f(i);
}
