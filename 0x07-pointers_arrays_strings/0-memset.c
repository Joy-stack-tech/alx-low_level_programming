#include "main.h"

/**
 * _memset - function fill the @n bytes of the memory area pointed
 * to by @s with the constant byte @b
 *
 * @b: constant byte, also memory area pointer
 *
 * @n: number of bytes to be filled in the memory block as pointed by @s
 *
 * @s: with the constant byte @b
 *
 * Return: a pointer to @s
*/
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i = 0;

	while (i < n)
	{
	s(i) = b;
	i++;
	}

	return (s);
}
